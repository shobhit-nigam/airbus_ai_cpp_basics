#include<iostream>
#include<string>
#include<stdio.h>

int main()
{
  int arr[5] {11, 22, 33, 44, 55};
  int *ptr{};
  ptr = arr;
  std::cout << "arr[3] = " << arr[3] << std::endl;
  std::cout << "*(arr+3) = " << *(arr+3) << std::endl;
  std::cout << "ptr[3] = " << ptr[3] << std::endl;
  std::cout << "3[arr] = " << 3[arr] << std::endl;
  return 0;

}
