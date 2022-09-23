#include<iostream>

class Unix
{
public:
  int val{100};

  virtual void funcx()
  {
    std::cout << "in parent val =" << val << std::endl;
  }
};

class Linux : public Unix
{
public:
  virtual void funcx()
  {
    std::cout << "in child val =" << val << std::endl;
  }
};


int main()
{
  Linux objl{};
  Unix* objp {&objl};
  Unix& objr {objl};
  objl.funcx();
  objp->funcx();
  objr.funcx();

  return 0;
}
