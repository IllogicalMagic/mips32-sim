#include <cstring>
//#include <cstdlib>
#include <iostream>
#include <assert.h>
#include <boost/program_options.hpp>
#include "options.h"

namespace po = boost::program_options;
using std::cout;

struct ParseWrapper {
    po::variables_map args;
    po::options_description desc;

    ParseWrapper(int argc, char ** argv, size_t mem_default):
        desc("Allowed options") {
            po::positional_options_description p;
            p.add("file", -1);

            desc.add_options()
                ("help", "produce help message")
                ("memSize", po::value<size_t>()->default_value(mem_default), "set memory size")
                ("file", po::value<std::string>(), "file to execute")
                ("logfile", po::value<std::string>()->implicit_value("log.txt"), "file where to log core's work")
                ("logconsole", "log to console")
                ("loglevel", po::value<Simulator::Logger::LogLevel>())
            ;
            po::store(po::command_line_parser(argc, argv).options(desc).positional(p).run(), args);
            po::notify(args);

            if (args.count("help")) {
                cout << desc << "\n";
                exit(0);
            }
            if (args.count("logfile") && args.count("logconsole")) {
                cout << "You must choose - log to console or file" << "\n";
                exit(0);
            }
            if ((args.count("logfile") || args.count("logconsole")) && !args.count("loglevel")) {
                cout << "You must provide loglevel for logging" << "\n";
                exit(0);
            }
        }
};
//TODO close fields for modification, provide access methods
AppmodeArguments::AppmodeArguments(int argc, char ** argv) {
    ParseWrapper argHelper(argc,argv, DEFAULT_MEMSIZE);
    auto& fields = argHelper.args;

    //PRINT_ERROR("File should be specified after --raw option\n");
    assert(fields.count("file") && "ELF filename is essential for the launch");
    filename = fields["file"].as< std::string >();
    memSize = fields["memSize"].as<size_t>();

    bool consoleLog = fields.count("logconsole");
    bool isFileLog = fields.count("logfile");
    std::string fileLogname = isFileLog ? fields["logfile"].as<std::string>() : "";

    if (isFileLog) {
        fileLog = std::ofstream(fileLogname);
        Simulator::Logger::LogLevel lvl = fields["loglevel"].as<Simulator::Logger::LogLevel>();
        logger = std::make_unique<SimLogger>(fileLog, lvl);
    }
    else if (consoleLog) {
        Simulator::Logger::LogLevel lvl = fields["loglevel"].as<Simulator::Logger::LogLevel>();
        logger = std::make_unique<SimLogger>(std::cout, lvl);
    }
    else
        logger = std::make_unique<SimLogger>();
}

FullSimArguments::FullSimArguments(int argc, char ** argv) {
    ParseWrapper argHelper(argc,argv, DEFAULT_MEMSIZE);
    auto& fields = argHelper.args;

    //PRINT_ERROR("File should be specified after --raw option\n");
    assert(fields.count("file") && "Binary filename is essential for the launch");
    filename = fields["file"].as< std::string >();
    memSize = fields["memSize"].as<size_t>();
}
