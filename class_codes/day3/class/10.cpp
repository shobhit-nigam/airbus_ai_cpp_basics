#include<iostream>
#include<unistd.h>

int ga = 100;   // extern
static int gb = 200;

void funcx()
{
  int i = 10;
  // lives & breathes is stack
  static int j = 10;
  // resides in static
  i++;  j++;
  std::cout << "i = " << i << std::endl;
  std::cout << "j = " << j << std::endl;
  return;
}

// static

int main()
{
  funcx();
  std::cout << "-------------" << std::endl;
  funcx();
  std::cout << "-------------" << std::endl;
  funcx();

  return 0;
}
