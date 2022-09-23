#include<iostream>

class Unix
{
public:
  int varx{};

  Unix()
  {
    std::cout << "default constructor of unix" << std::endl;
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

class MobileOS
{
public:
  MobileOS()
  {
    std::cout << "constructor of MobileOS" << std::endl;
  }
  void portable()
  {
    std::cout <<"os is portable" << std::endl;
  }
  void free()
  {
    std::cout << "mobileOS is free" << std::endl;
  }
  ~MobileOS()
  {
    std::cout << "constructor of MobileOS" << std::endl;
  }
};

class Android : public MobileOS, public Linux
{
public:
  void free() = delete;
  Android()
  {
    std::cout << "constructor of Android" << std::endl;
  }
  ~Android()
  {
    std::cout << "destructor of Android" << std::endl;
  }
};



int main()
{
  Android objl{};
  //objl.free();
  return 0;
}
