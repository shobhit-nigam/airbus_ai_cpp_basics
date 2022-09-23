#include<iostream>
int ga{100};
void funcy(int);
void funcx(int la)
{
  int lb{11};
  std::cout << "adr of la = " << &la << std::endl;
  std::cout << "adr of lb = " << &lb << std::endl;
  funcy(99);
  return;
}
void funcy(int ta)
{
  int tb{11};
  static int tc{20};
  std::cout << "adr of ta = " << &ta << std::endl;
  std::cout << "adr of tb = " << &tb << std::endl;
  std::cout << "adr of tc = " << &tc << std::endl;
  return;
}

int main()
{
  int ma{10};
  int *ptr{&ma};
  int *qtr{ new int};
  std::cout << "adr of ma = " << &ma << std::endl;
  std::cout << "adr of ptr = " << &ptr << std::endl;
  std::cout << "adr of qtr = " << &qtr << std::endl;
  std::cout << "adr of ga = " << &ga << std::endl;
  std::cout << "ptr pointing to= " << ptr << std::endl;
  std::cout << "qtr pointing to= " << qtr << std::endl;
  funcx(ma);
  funcy(ma);
  delete qtr;

  return 0;
}
