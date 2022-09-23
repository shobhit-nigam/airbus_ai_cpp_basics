#include<iostream>

class CoOrds{
private:
  int x{};
  int y{};
  int z{};

public:
  CoOrds(int x=0, int y=0, int z=0)
  {
    this->x = x;  this->y=y;  this->z=z;
  }

  CoOrds operator + (CoOrds const& temp)
  {
    CoOrds ret{};
    ret.x = this->x + temp.x;
    ret.y = y + temp.y;
    ret.z = z + temp.z;
    return ret;
  }
  bool operator < (CoOrds const& temp)
  {
    bool ret = true;
    // code for comparision
    return ret;
  }

  void display()
  {
    std::cout << "x=" << x << "\ny=" << y << "\nz=" << z << std::endl;
  }
};

int main()
{
  CoOrds objs {4, 6, 9};
  CoOrds objt {8, 7, 10};
  CoOrds final{};
  final.display();
  final = objs + objt;
          // objs.+(objt)
  final.display();

  return 0;
}
