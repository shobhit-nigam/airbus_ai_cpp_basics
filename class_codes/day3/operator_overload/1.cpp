#include<iostream>

class Cricket{
private:
  int over{};
  int ball{};

public:
  Cricket(int over, int ball)
  {
    this->over = over;
    this->ball = ball;
  }

  void operator ++ ()
  {
    if (ball == 5)
    {
      ++over;
      ball = 0;
    }
    else
    {
      ++ball;
    }
  }

  void display()
  {
    std::cout << over << " overs and " << ball << " balls" << std::endl;
  }
};

int main()
{
  Cricket objs {4, 4};
  objs.display();
  ++objs;
  objs.display();       // objs.++()
  ++objs;
  objs.display();
  return 0;
}
