#include <iostream>

int main()
{
    int _x = 20;
    int &y = _x;
    std::cout << &_x << "\n"<< &y << "\n";

    int *ptr = new int(10);
    int &pt = *ptr;

    std::cout << &ptr << "\n"<< &pt << "\n";
    delete ptr;

    std::cout << &ptr << "\n"<< &pt << "\n";
    return 0;
}
