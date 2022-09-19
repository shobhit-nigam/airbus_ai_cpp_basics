// default values
// error because of intialization
#include<iostream>
void funcx(int la, int lb = 200)
{
	std::cout << "la=" << la << " lb=" << lb << std::endl;
	return;
}

void funcx(int la)
{
	std::cout << "la=" << la << std::endl;
	return;
}

int main()
{
	funcx(11, 22);
	funcx(33);
	return 0;
}
