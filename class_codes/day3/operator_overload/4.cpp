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

  friend CoOrds operator +(CoOrds const& temp, CoOrds const& temq);

  void display()
  {
    std::cout << "x=" << x << "\ny=" << y << "\nz=" << z << std::endl;
  }
};

CoOrds operator + (CoOrds const& temp, CoOrds const& temq)
{
  CoOrds ret{};
  ret.x = temq.x + temp.x;
  ret.y = temq.y + temp.y;
  ret.z = temq.z + temp.z;
  return ret;
}

int main()
{
  CoOrds objs {4, 6, 9};
  CoOrds objt {5, 3, 2};
  CoOrds final{};
  final.display();
  final = objs + objt;
          // +(objs, objt)
  final.display();


  return 0;
}
