#include <iostream>

//function asks user for number and outputs double that number
int main()
{
	std::cout << "Enter an integer: ";

	int num{}; //user input will be stored here

	std::cin >> num;

	std::cout << "Double that number is: " << num * 2 << '\n'; //outputs double that number

	std::cout << "Triple that number is: " << num * 3 << '\n'; //outputs triple that number
}
