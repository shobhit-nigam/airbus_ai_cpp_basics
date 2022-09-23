#include<iostream>

class Cricket{
private:
  int over{};
  int ball{};

public:
  Cricket(int over=0, int ball=0)
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

  void operator ++ (int)
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

  Cricket operator + (Cricket const& temp)
  {
    Cricket ret{};
    int total_balls = 0;
    total_balls = ball + temp.ball  + over*6 + temp.over*6;
    ret.over = (int) total_balls/6;
    ret.ball = total_balls%6;
    return ret;
  }
  Cricket operator + (int const& temp)
  {
    Cricket ret{};
    int total_balls = 0;
    total_balls = ball + temp + over*6;
    ret.over = (int) total_balls/6;
    ret.ball = total_balls%6;
    return ret;
  }
  void display()
  {
    std::cout << over << " overs and " << ball << " balls" << std::endl;
  }
};

int main()
{
  Cricket objs {4, 4};
  Cricket objt {4, 5};
  Cricket final{};
  objs.display();    // 4,4
  ++objs;           // objs.++()
  objs.display();   //4,5
  objs++;
  objs.display();   //5,0
  final = objs + objt;
  final.display();  //9,5
  final = final + 3;
  final.display();  //10, 2
  return 0;
}
