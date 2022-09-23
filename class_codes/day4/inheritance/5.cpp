#include<iostream>

class Unix
{
private:
  int private_varx{};
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
  void free()
  {
    std::cout << "opensource & free" << std::endl;
    std::cout << "private_varx =" << private_varx << std::endl;
  }
};

int main()
{
  Unix obju{};
  Linux objl{};
  obju.public_varx = 100;
  std::cout << obju.public_varx << std::endl;
  std::cout << objl.public_varx << std::endl;
  objl.free();
  return 0;
}
