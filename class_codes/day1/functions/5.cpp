#include<iostream>
void funcx(int la, int lb)
{
	std::cout << "got two ints" << std::endl;
	return;
}

void funcx(char la, char lb)
{
	std::cout << "got two chars" << std::endl;
	return;
}
void funcx(float la, float lb)
{
	std::cout << "got two floats" << std::endl;
	return;
}
void funcx(float la, ...)
{
	std::cout << "got two floats" << std::endl;
	return;
}


int main()
{
	float fa {2.4};
	funcx(100, 200);
	funcx('a', 'b');
	funcx(fa, fa);
	funcx(12.3f, 23.4f);    // double
	return 0;
}
