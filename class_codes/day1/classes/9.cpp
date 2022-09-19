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
	void display()
	{
		std::cout << name << " is "
		<< age<< " years old " << std::endl;
	}
	void display(int la)
	{
		std::cout << "function with 1 parameter" << std::endl;
	}
};
int main(){
// 	Human objt {2347, 42, "shobhit"};  //list intialization
	Human objt;
	Human objp {};
		// objp, assign zero/default values, then default constructor
	objt.display();
	objt.display(20);
	return 0;
	}





// objt.__init__()
