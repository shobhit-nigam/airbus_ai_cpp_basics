#include<iostream>

int main()
{
  int len{};
  int ma{10};
  int arr [] {11, 23, 43, 65, 38, 95};
  for (auto num : arr)
  {
    std::cout << num << std::endl;
  }
  return 0;
}
