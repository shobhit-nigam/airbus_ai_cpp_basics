#include<iostream>
#include<string>
#include<stdio.h>

void funca(std::string obja){}
void funcb(std::string& obja){}
void funcc(std::string* obja){}
void funcd(const std::string& obja){}
void funce(std::string obja){}
int main()
{

std::string stra{"hello world"};
std::string * ptr{&stra};

funca(stra);  //pass by value, copy is made
funcb(stra);  //pass by reference, no copy
funcc(&stra); //pass by address
funcc(ptr);   // pass by address
funcd(stra);  //pass by reference, no copy
funce(*ptr);  // pass by value, copy is made (only first character is passed)


}


//
