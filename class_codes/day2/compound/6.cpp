#include<iostream>
#include<string>

void funcx()
{
    //std::cout << "varr = " << varr << std::endl;
    // some code
    return;
}

int main()
{

  int varx {10};
//  int* ptr {};
  int* qtr {&varx};
//  void* str {};
  std::cout << "varx = " << varx << std::endl;
  *qtr = 20;
  std::cout << "varx = " << varx << std::endl;
//  funcx();
// some code

  return 0;
}


//
