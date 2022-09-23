#include<iostream>
#include<unistd.h>

class Sample
{
  int id{};
public:
  Sample(int idx) : id{idx}
  {
    // id = idx;
    std::cout << "constructing " << id <<std::endl;
  }
  ~Sample()
  {
    std::cout << "destructing " << id <<std::endl;
  }
  int getId()
  {
    return id;
  }
};

int main()
{
  Sample objs {3};
  Sample* ptr {new Sample{4}};
  // an object (without any name) spaceX has been created in heap
  // address of that allocation is passed to ptr

  sleep(5);
  delete ptr;
  //
  return 0;
}
