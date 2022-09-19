// default values
// error because default values should be right most
#include<iostream>
void funcx(int la=200, int lb)
{
	std::cout << "la=" << la << " lb=" << lb << std::endl;
	return;
}


int main()
{
	funcx(11, 22);
	funcx(33);
	return 0;
}
