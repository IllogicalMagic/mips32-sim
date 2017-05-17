#include <cassert>
#include <iostream>

#include "core.h"

int main()
{
  Simulator::Core::Core C(1024);

  C.testSysregs();

  std::cout << "Successfully initialized\n";
  
  return 0;
}
