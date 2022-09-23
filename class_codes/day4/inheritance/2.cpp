#include<iostream>

class Unix
{
public:
  int varx{};

  Unix()
  {
    std::cout << "default constructor of unix" << std::endl;
  }

  Unix(int varx)
  {
    this->varx = varx;
    std::cout << "parameterised constructor of unix" << std::endl;
  }
  void secure()
  {
    std::cout << "rwx makes it secure" << std::endl;
  }
  void cli()
  {
    std::cout << "shell makes it easy to work with" << std::endl;
  }
  ~Unix()
  {
    std::cout << "destructor of unix" << std::endl;
  }
};

class Linux : public Unix
{
public:
  Linux()
  {
    std::cout << "constructor of Linux" << std::endl;
  }
  void free()
  {
    std::cout << "opensource & free" << std::endl;
  }
  ~Linux()
  {
    std::cout << "destructor of Linux" << std::endl;
  }
};

int main()
{
  Linux objl{};
          // Unix() Linux()

  return 0;
}
