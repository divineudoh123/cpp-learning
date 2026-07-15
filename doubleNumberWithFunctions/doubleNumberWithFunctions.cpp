#include <iostream>

int readInteger()
{
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input;
}

int doubleNumber(int number)
{
	return number * 2;
}

int main()
{
	int num{ readInteger() };
	std::cout << "Double of " << num << " is " << doubleNumber(num) << ".\n";
}