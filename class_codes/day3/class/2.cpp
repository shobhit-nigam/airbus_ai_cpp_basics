#include <iostream>

class Sample
{
    public:
        Sample()
        {
            std::cout << "default constructor" << std::endl;
        }
        Sample(int val):Sample{}
        {
            std::cout << "param constructor" << std::endl;
        }
        

};
int main()
{
    std::cout << "Driver code" << std::endl;
    Sample sample;
    Sample temple();
    Sample ample = Sample();
    Sample *repl = new Sample();
    // function pointer




    return 0;
}
