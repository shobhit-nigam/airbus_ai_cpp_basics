#include<iostream>

int main()
{
  int len{};
  int ma{10};
  int *qtr{ new int};
              // new[]
  std::cout << "enter the length" << std::endl;
  std::cin >> len;
  int *arr{new int[len]};

  std::cout << "qtr pointing to= " << qtr << std::endl;
  std::cout << "arr pointing to= " << arr << std::endl;
  delete qtr;
  delete [] arr;
  return 0;
}
