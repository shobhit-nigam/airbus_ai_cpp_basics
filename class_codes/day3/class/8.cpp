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
  void assign(int idx, int valx)
  {
    static int val = valx;   // local data val
    id =idx;  val=valx;
  }
};

int Sample::val {90};

int main()
{
  Sample objs {3};
  Sample objt {4};
  objs.assign(11, 1000);
  objt.assign(12, 2000);
  objs.display();
  objt.display();

  //

  return 0;
}
