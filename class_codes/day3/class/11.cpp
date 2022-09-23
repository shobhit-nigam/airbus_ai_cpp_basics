#include<iostream>
#include<unistd.h>

class Sample
{
  int id{};
  static int val;
public:
  Sample(int id)
  {
    this->id = id;
  }
  void display()
  {
    std::cout << "id=" << id << " val=" << val << std::endl;
  }
  static void funcx()
  {
//    std::cout << "id=" << id << std::endl;
    int id = 100;
    std::cout << "val=" << val << std::endl;
  }
};

int Sample::val {90};

int main()
{
  Sample objs {3};
  Sample objt {4};
  objs.funcx();
  // Sample::funcx();

  //

  return 0;
}
