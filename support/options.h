#ifndef SIM_MIPS32_OPTIONS_PARSER_HPP__
#define SIM_MIPS32_OPTIONS_PARSER_HPP__

#include <memory>

#include "execution/fixed_mapping.h"
#include "logging.h"

struct AppmodeArguments {
    using SimLogger = Simulator::Logger::SimLogger<Simulator::MMU::FixedMapping>;

    std::string filename;
    size_t memSize;
    //Logger::LogLevel lvl;
    //bool consoleLog;
    //bool fileLog;
    std::ofstream fileLog;
    std::unique_ptr<SimLogger> logger;

    // For now it is fixed.
    constexpr static size_t DEFAULT_MEMSIZE = ((size_t) 1024) * 1024 * 1024 * 2; // 2 GB for user-mode

    AppmodeArguments(int argc, char ** argv);
};
struct FullSimArguments {
    std::string filename;
    size_t memSize;

    // For now it is fixed.
    constexpr static size_t DEFAULT_MEMSIZE = 1024;

    FullSimArguments(int argc, char ** argv);
};

#endif
