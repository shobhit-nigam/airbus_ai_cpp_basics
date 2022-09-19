#include<iostream>

float fa {3.3};
double da {3.3};

void funcx(int la)
{
	std::cout << "la = " << la << std::endl;
	return;
}


int main()
{
	funcx(4.1);
	if (fa == da)
	{
		std::cout << "hello" << std::endl;
	}
	else
	{
		std::cout << "hi" << std::endl;
	}
	return 0;
}
