#include "include/hello.h"
#include <string>
#include <iostream>

void hello(const std::string& name) {
  std::cout << "hello, " << name << "\n";
}
