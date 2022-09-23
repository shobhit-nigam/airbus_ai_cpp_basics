#include<iostream>
#include<string>
#include<stdio.h>

void funcx()
{
    //std::cout << "varr = " << varr << std::endl;
    // some code
    return;
}

int main()
{

  int varx {336};       // 2000
  int* ptr {&varx};     
  std::cout << "ptr = " << ptr << std::endl;
  std::cout << "*ptr = " << *ptr << std::endl;
  {
    int vary{100};      // 2600
    ptr = &vary;
    std::cout << "ptr = " << ptr << std::endl;
    std::cout << "*ptr = " << *ptr << std::endl;

  }
  // undefined behaviour
  std::cout << "ptr = " << ptr << std::endl;
  std::cout << "*ptr = " << *ptr << std::endl;

  return 0;
}


//
