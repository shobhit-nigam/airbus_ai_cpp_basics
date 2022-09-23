#include<iostream>

int main()
{
  int  varx {10};   // int type
  int& varr {varx};   // an lvalue reference to an int object
  int &vars {varr};

  std::cout << "varx = " << varx << std::endl;
  std::cout << "varr = " << varr << std::endl;

  varr = 33;

  std::cout << "varx = " << varx << std::endl;
  std::cout << "varr = " << varr << std::endl;

  return 0;
}


//
