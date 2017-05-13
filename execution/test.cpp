#include <cassert>
#include <iostream>

#include "core.h"

int main()
{
  Simulator::Core::Core C;

  C.testSysregs();

  std::cout << "Successfully initialized\n";
  
  return 0;
}
