#!/usr/bin/python3
import argparse
import subprocess
import os

def parse_arguments():
    args = argparse.ArgumentParser()
    args.add_argument("sim1path", type=str, help="Path to first appmode impl")
    args.add_argument("--natcompare", action='store_true', help="Compare return code to that of native machine")
    args.add_argument("-sim2path", type=str, help="Path to first appmode impl")
    args.add_argument("testpath", type=str, help="Path to test")
    res = args.parse_args()
    assert(res.sim2path is not None or res.natcompare is not None)
    return res

if __name__ == '__main__':
    args = parse_arguments()
    if args.sim2path is None:
        launch_line = "./"+args.sim1path + " " + args.testpath
        print("executing '{}'".format(launch_line))
        finished_sim_out = subprocess.run(launch_line, shell = True, stdout = subprocess.PIPE).stdout.decode()
    else:
        launch_line = "./{} " + args.testpath + " --logfile {} --loglevel DEBUG"

        line = launch_line.format(args.sim1path, '1.log')
        print("executing '{}'".format(line))
        finished_sim_out = subprocess.run(line, shell = True, stdout = subprocess.PIPE).stdout.decode()

        line = launch_line.format(args.sim2path, '2.log')
        print("executing '{}'".format(line))
        subprocess.run(line, shell = True)

        finished_proc = subprocess.run("diff 1.log 2.log", shell = True)
        if finished_proc.returncode == 0:
            print("Equal results")
            os.remove('1.log')
            os.remove('2.log')
        else:
            print("Results differ. Diff output:\n", finished_proc.stdout)
            exit(0)

    if args.natcompare:
        launch_line = "./" + args.testpath[:-4]+"nat"
        print("executing '{}'".format(launch_line))
        finished_natcode = subprocess.run(launch_line, shell = True).returncode

        simcode = 0
        for line in finished_sim_out.split('\n'):
            if line.startswith("Program"):
                simcode = int(line.split()[-1][:-1])
                break
        if simcode == finished_natcode:
            print("Exit code equal to nat: ", simcode)
        else:
            print("Codes differ: nat={} sim={}".format(finished_natcode, simcode))
