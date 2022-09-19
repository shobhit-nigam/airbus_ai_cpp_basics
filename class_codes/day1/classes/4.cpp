#include<iostream>
#include<string>

class Date
{
public:
	int id {};
	int age {};
	std::string name {};
	void display()
	{
		std::cout << name << " is "
		<< age<< " years old " << std::endl;
	}
};

int main(){
	Date objt {2347, 42, "shobhit"};  //uniform intialization

	objt.display();
	return 0;
	}

	// bjarne stroustrup
	// C with classes
