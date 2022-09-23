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

class Linux : public Unix
{
public:
  int public_varx{100};
  void cli(int x)
  {
    std::cout << "shell is good but UI makes it easy to work with" << std::endl;
  }
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
  obju.cli();
  objl.cli(100);
  // error
  objl.cli();
  return 0;
}
