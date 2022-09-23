#include<iostream>

class Unix
{
protected:
  int protected_varx{};
public:
  int public_varx{};

  void secure()
  {
    std::cout << "rwx makes it secure" << std::endl;
  }
  void cli()
  {
    std::cout << "shell makes it easy to work with" << std::endl;
  }
};

class Linux : private Unix
{
public:

  void free()
  {
    std::cout << "opensource & free" << std::endl;
    std::cout << "protected_varx =" << protected_varx << std::endl;
  }
};

int main()
{
  Unix obju{};
  Linux objl{};
  obju.public_varx = 100;
  std::cout << obju.public_varx << std::endl;
  std::cout << objl.public_varx << std::endl;
  return 0;
}
