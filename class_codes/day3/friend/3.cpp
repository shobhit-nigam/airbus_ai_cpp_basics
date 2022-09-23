#include<iostream>
#include<unistd.h>
class Temple;
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
  friend void calc_data(Sample& temp, Temple& temq);
};
class Temple
{
  int id{};
public:
  int val{};
  Temple(int id, int val)
  {
    this->id = id;
    this->val = val;
  }
  void display()
  {
    std::cout << "id=" << id << " val=" << val << std::endl;
  }
  friend void calc_data(Sample& temp, Temple& temq);
  friend Temple;
};

void calc_data(Sample& temp, Temple& temq)
{
    std::cout << "here to add prrivate data" << std::endl;
    int sum = temp.id + temq.id;
    std::cout << "sum=" << sum << std::endl;
}
int main()
{
  Sample objs {3, 100};
  Temple objt {4, 200};
  calc_data(objs, objt);
  return 0;
}
