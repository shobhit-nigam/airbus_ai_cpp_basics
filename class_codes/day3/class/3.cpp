#include<iostream>
#include<unistd.h>

class Sample
{
  int *arr{};
  int id{};
public:
  Sample(int length, int id)
  {
    std::cout << "constructing" << id <<std::endl;
    arr = new int[5]{};
  }
  ~Sample()
  {
    std::cout << "destructing" << id <<std::endl;
    delete[] arr;
  }
};

int main()
{
  Sample objs {5, 3};
  Sample objt {6, 4};
  sleep(5);
  return 0;
}
