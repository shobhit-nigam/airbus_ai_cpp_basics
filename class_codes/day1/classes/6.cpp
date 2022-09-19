#include<iostream>
#include<string>

class Human
{
private:
	int id {};
	int age {};
	std::string name {};
public:
	Human()
	{
		id = 100;
		age = 30;
		name = "john doe";
	}
	void setData(int idx, int agex, std::string namex)
	{
		id = idx;
		age = agex;
		name = namex;
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
	objt.display();
	objt.setData(4567, 39, "jane doe");
	objt.display();

	return 0;
	}
