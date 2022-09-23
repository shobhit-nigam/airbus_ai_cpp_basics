#include<iostream>

int main()
{
//  const int  varx {10};   // int type
  const int& varr {100};   // not an error
/*
  int  vary {10};   // int type
  const int& vars {vary};   // not an error
*/

  std::cout << "varx = " << varx << std::endl;
  std::cout << "varr = " << varr << std::endl;

  varr = 33;

  std::cout << "varx = " << varx << std::endl;
  std::cout << "varr = " << varr << std::endl;

  return 0;
}


//
