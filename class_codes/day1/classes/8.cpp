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
};
int main(){
// 	Human objt {2347, 42, "shobhit"};  //list intialization
	Human objt;
	Human objp {};
		// objp, assign zero/default values, then default constructor
	objt.display();
	objt.setData(4567, 39, "jane doe");
	objt.display();
	return 0;
	}





// objt.__init__()
