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

  int varx {330};
  int* ptr {&varx};
  char* qtr;
   //qtr = ptr
  //

  qtr = (char *) ptr;

  std::cout << "varx = " << varx << std::endl;
  std::cout << "*ptr = " << *ptr << std::endl;
  std::cout << "*qtr = " << *qtr << std::endl;

  return 0;
}


//
