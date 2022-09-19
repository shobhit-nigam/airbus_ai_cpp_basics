// default values 

#include<iostream>
void funcx(int la, int lb=100)
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
