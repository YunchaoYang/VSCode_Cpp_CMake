#include "test.h"
#include <iostream>

void Test::Foo(int& i) {
  std::cout << "Test::Foo" << i << std::endl;    
}
