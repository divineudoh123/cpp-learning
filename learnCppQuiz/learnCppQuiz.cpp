#include <iostream>

//Program asks users to enter three numbers and prints what the user entered
int main()
{
	std::cout << "Enter three numbers: ";

	int num1{};
	int num2{};
	int num3{};

	std::cin >> num1 >> num2 >> num3;

	std::cout << "You entered: " << num1 << ", " << num2 << " and " << num3 << ".\n";
}