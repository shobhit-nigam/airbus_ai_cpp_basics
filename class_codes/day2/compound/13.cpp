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

  int varx = 336;
  int vary = 400;
  int* const ptr = &varx;

  //error
  ptr = &vary;

  std::cout << "varx = " << varx << std::endl;
  std::cout << "ptr = " << ptr << std::endl;
  std::cout << "*ptr = " << *ptr << std::endl;


  return 0;
}


//
