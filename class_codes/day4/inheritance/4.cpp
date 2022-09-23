#include<iostream>

class Unix
{
public:
  int varx{};

  Unix(int varx)
  {
    this->varx = varx;
    std::cout << "parameterised constructor of unix = " << varx << std::endl;
  }
  void secure()
  {
    std::cout << "rwx makes it secure" << std::endl;
  }
  void cli()
  {
    std::cout << "shell makes it easy to work with" << std::endl;
  }
};

class Linux : public Unix
{
public:
  Linux(int vary): Unix{vary}
  {
    std::cout << "constructor of Linux" << std::endl;
  }
  void free()
  {
    std::cout << "opensource & free" << std::endl;
  }
};

int main()
{
  Linux objl{20};
  return 0;
}
