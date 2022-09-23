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

  int varx {336};
//  int* ptr {};
  int *qtr;
//  std::cout << "ptr = " << ptr << std::endl;
//  std::cout << "*ptr = " << *ptr << std::endl;
  // undefined behaviour
  std::cout << "qtr = " << qtr << std::endl;
  std::cout << "*qtr = " << *qtr << std::endl;

  return 0;
}


//
