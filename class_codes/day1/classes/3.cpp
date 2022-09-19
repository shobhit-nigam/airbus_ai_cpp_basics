#include<iostream>

class Date
{
public:
	int year {};
	int month {};
	int day {};
	void display(Date objp)
	{
		std::cout << objp.day << '/' << objp.month<< '/' << objp.year << std::endl;
	}
};

int main(){
	Date objt {2022, 9, 19};  //uniform intialization

	objt.day = 18;
	objt.display();
	return 0;
	}

	// bjarne stroustrup
	// C with classes
