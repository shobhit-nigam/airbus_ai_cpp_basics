#include<iostream>

int main()
{
  int ma{10};
  int *ptr{&ma};
  int *qtr{ new int};
  std::cout << "ptr pointing to= " << ptr << std::endl;
  std::cout << "qtr pointing to= " << qtr << std::endl;
  delete qtr;
  qtr = nullptr;

  if (!qtr)
  {
    str = new int;
  }

  return 0;
}
