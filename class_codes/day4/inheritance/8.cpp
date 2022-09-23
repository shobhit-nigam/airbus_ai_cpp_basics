#include<iostream>

class Unix
{
protected:
  int protected_varx{};
public:
  int public_varx{};
  static int si;

  void secure()
  {
    std::cout << "rwx makes it secure" << std::endl;
  }
  void cli()
  {
    std::cout << "shell makes it easy to work with" << std::endl;
  }
};

int Unix::si{20};

class Linux : public Unix
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
  std::cout << obju.si << std::endl;
  std::cout << objl.si << std::endl;
  obju.si = 25;
  std::cout << obju.si << std::endl;
  std::cout << objl.si << std::endl;
  return 0;
}
