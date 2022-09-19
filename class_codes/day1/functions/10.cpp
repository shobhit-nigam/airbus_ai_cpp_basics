#include<iostream>
inline int funcx(int la, int lb)
{
	return 2*la*la + 3*lb + 10;
}

int main()
{
	std::cout << "val = " << funcx(10, 20) << std::endl;
	return 0;
}
