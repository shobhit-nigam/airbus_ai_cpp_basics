#include<iostream>
#include<string>

class Human
{
	int id {};
	int age {};
	std::string name {};
public:
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
// 	Human objt {2347, 42, "shobhit"};  //uniform intializatio
	Human objt;

	objt.setData(4567, 39, "john doe");
	objt.display();
	return 0;
	}
