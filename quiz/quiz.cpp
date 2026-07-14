#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int num1; //first integer will be stored here
    std::cin >> num1;

    std::cout << "Enter another integer: ";
    int  num2; //second integer will be stored here
    std::cin >> num2;

    //outputs the sum of the two numbers
    std::cout << num1 << " + " << num2 << " is " << num1 + num2 << ".\n";
    //outputs the difference of the two numbers
    std::cout << num1 << " - " << num2 << " is " << num1 - num2 << ".\n";

    return 0;
}
