#include<iostream>
int add(int la, int lb)
{
	std::cout << "got two ints" << std::endl;
	return la + lb;
}

double add(double la, double lb)
{
	std::cout << "got two double" << std::endl;
	return la + lb;
}

int main()
{
	int ma {};
	add(100, 200);
	add(12.3, 14.5);
	return 0;
}
