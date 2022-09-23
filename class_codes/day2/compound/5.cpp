#include<iostream>
#include<string>

void funcx(const std::string& varr)
{
    std::cout << "varr = " << varr << std::endl;
    // some code
    return;
}

int main()
{

  std::string varxx {"let the force be with you"};

  funcx(varx);
// some code

  return 0;
}


//
