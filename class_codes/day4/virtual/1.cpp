#include<iostream>

class Unix
{
public:
  int val{100};

  void funcx()
  {
    std::cout << "in parent val =" << val << std::endl;
  }
};

class Linux : public Unix
{
  void funcy()
  {
    std::cout << "in child val =" << val << std::endl;
  }
};


int main()
{
  Linux objl{};
  Linux* objp {&objl};
  Linux& objr {objl};
  objr.funcx();

  return 0;
}
