// This program doesn't work
#include <iostream>

int getValueFromUser()
{
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input; //make sure your function that is not a void type always returns a value!
}

int main()
{
	int num{ getValueFromUser() };

	std::cout << num << " doubled is: " << num * 2 << '\n';

	return 0;
}