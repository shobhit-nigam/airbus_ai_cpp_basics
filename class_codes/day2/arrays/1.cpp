#include<iostream>
#include<string>
#include<stdio.h>

int main()
{
  int arr[5] {11, 22, 33, 44, 55};
  int *ptr{};
  ptr = arr;
  std::cout << "arr = " << arr << std::endl;
  std::cout << "ptr = " << ptr << std::endl;
  std::cout << "arr[0] = " << arr[0] << std::endl;
  std::cout << "ptr[0] = " << ptr[0] << std::endl;
  std::cout << "*arr = " << *arr << std::endl;
  std::cout << "*ptr = " << *ptr << std::endl;
  ptr++;
  std::cout << "*arr = " << *arr << std::endl;
  std::cout << "*ptr = " << *ptr << std::endl;
  // error
  arr++;
  return 0;

}
