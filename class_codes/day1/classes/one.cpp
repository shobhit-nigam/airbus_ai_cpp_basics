#include<iostream>
//using namespace std;
struct Date
{
	int year {};
	int month {};
	int day {};
};

// void display(const Date& objp)
void display(Date objp)
{
	std::cout << objp.day << '/' << objp.month<< '/' << objp.year << std::endl;
	return;
}

int main(){
	Date objt {2022, 9, 19};  //uniform intialization

	objt.day = 18;
	display(objt);
	return 0;
	}

	// objp = objt
