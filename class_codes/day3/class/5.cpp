#include<iostream>
#include<unistd.h>

class Sample
{
  int id{};
  int val{};
public:
  Sample(int idx, int valx)
  {
    id = idx;
    val = valx;
//    std::cout << "constructing " << id <<std::endl;
  }
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
  objt.display();

  // 

  return 0;
}
