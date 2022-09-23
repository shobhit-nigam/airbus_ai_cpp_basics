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
  int* ptr {&varx};
  char* qtr;
  // qtr = ptr
  // qtr = *ptr;

  qtr = (char *) ptr;
/*
  std::cout << "varx = " << varx << std::endl;
  std::cout << "*ptr = " << *ptr << std::endl;
  std::cout << "*qtr = " << *qtr << std::endl;*/
  std::cout << "ptr = " << ptr << std::endl;
  std::cout << "qtr = " << qtr << std::endl;

  printf("ptr --> %p\n", ptr);
  printf("qtr --> %p\n", qtr);
  return 0;
}


//
