#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input; //The integer the user enters will be stored here
    std::cin >> input;

    return input;
}

void printDouble(int value)
{
    std::cout << "Double of " << value << " is " << value * 2 << ".\n";
}

int main()
{
    int num{ getValueFromUser() };
    printDouble(num);
}

