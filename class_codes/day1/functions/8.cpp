// default values
// error because of intialization
#include<iostream>
void funcx(int la=200, int lb {5})
{
	std::cout << "la=" << la << " lb=" << lb << std::endl;
	return;
}

//std::optional

int main()
{
	funcx(11, 22);
	funcx(33);
	return 0;
}
