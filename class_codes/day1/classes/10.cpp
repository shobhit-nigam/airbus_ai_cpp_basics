#include<iostream>
#include<string>

class Human
{
private:
	int id {};
	int age {};
	std::string name {};
public:
	Human()  // default constructor
	{
		id = 100;
		age = 30;
		name = "john doe";
		std::cout << "constrcutor called automatically" << std::endl;
	}
	Human(int idx)
	{
		id = idx;
		age = 30;
		name = "john doe";
		std::cout << "overloaded constrcutor called automatically" << std::endl;
	}
};
int main(){
// 	Human objt {2347, 42, "shobhit"};  //list intialization
	Human objx;
	Human objy {};
	Human objz {10};
	return 0;
	}





// objt.__init__()
