#include<iostream>
#include<unistd.h>

class Sample
{
  int id{};
  int val{};
public:
  // Sample (Sample* const this, int id, int val)
  Sample(int id, int val)
  {
//    id = id;
    this->id = id;
    this->val = val;
  }
  // display(Sample* const this)
  void display()
  {
    std::cout << "id=" << this->id << " val=" << this->val << std::endl;
  }
};

int main()
{
  Sample objs {3, 100};
  Sample objt {4, 200};
  objs.display();
  // Sample.display(&objs)
  objt.display();

  //

  return 0;
}
