#include <iostream>
#include "test.h"

int main() {
  std::cout << "Hello Easy C++ project!" << std::endl;
  Test test;
  int arr[] = { 10, 20, 30, 40 };
  for(int i :arr){
      test.Foo(i);
  }
    
  return 0;
}
