#include <iostream>

int addition(int num1, int num2);

int subtraction(int num1, int num2);

int multiplication(int num1, int num2);

float division(float num1, float num2);

int main()
{
	std::cout << "Enter two numbers you want to perform simple mathematical operations on: ";
	int input1{};
	int input2{};
	std::cin >> input1 >> input2;

	std::cout << "Sum of the two numbers is: " << addition(input1, input2) << '\n'
		<< "Difference of the two numbers is: " << subtraction(input1, input2) << '\n'
		<< "Product of the two numbers is: " << multiplication(input1, input2) << '\n'
		<< "your first input divided by your second input is : " << division(input1, input2) << '\n';
	return 0;
}