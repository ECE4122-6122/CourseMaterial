#include <iostream>
// global variable
int gDataValue = 0;

// Function Prototype
int DoubleIt(int iValue);

int main()
{
    int iDataIn = 0; // This is a local variable
    
    std::cout << "Please enter number to double: ";
    std::cin >> iDataIn2;
    std::cout << "Your number doubled: " << DoubleIt(iDataIn) << std::endl;
    
}   

int DoubleIt(int iValue)
{
    return iValue*iValue;
}