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
};

int main()
{
  Unix obju{100};
  Linux objl{};
          // Unix() Linux()
  objl.secure();
  objl.cli();
  objl.free();
  return 0;
}
