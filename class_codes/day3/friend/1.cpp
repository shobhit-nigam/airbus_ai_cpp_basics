#include<iostream>
#include<unistd.h>

class Sample
{
  int id{};
public:
  int val{};
  Sample(int id, int val)
  {
    this->id = id;
    this->val = val;
  }
  void display()
  {
    std::cout << "id=" << id << " val=" << val << std::endl;
  }
};
class Temple
{
  int id{};
public:
  int val{};
  Sample(int id, int val)
  {
    this->id = id;
    this->val = val;
  }
  void display()
  {
    std::cout << "id=" << id << " val=" << val << std::endl;
  }
};

void cal_data(Sample& temp, Temple& temq)
{
    std::cout << "here to reset all data" << std::endl;
    int sum = temp.id + temq.id;
    std::cout << "id=" << temp.id << std::endl;
    std::cout << "temp.val=" << temp.val << std::endl;
}
int main()
{
  Sample objs {3, 100};
  Temple objt {4, 200};
  cal_data(objs, objt);
  return 0;
}
