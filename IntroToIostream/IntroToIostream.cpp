#include <iostream>

int main()
{
    /*std::cout << "Hello" << " world!" << std::endl; //multiple things on one line

    int x{ 5 };

    std::cout << "x is equal to: " << x << std::endl;

	//you dont want to use endl too much because it flushes the buffer, which is slow. You can use \n instead.

	std::cout << "Hello" << " world!\n"; //multiple things on one line
	std::cout << "This appears on a new line\n";
	std::cout << "You can also put the new line in its own quote" << '\n';
	*/

	//now learning std::cin
	/*std::cout << "Enter a number: "; //ask user for a random number

	int x{}; // define variable x which holds the user input

	std::cin >> x; //get number from keyboard and store it in x

	std::cout << "The number you entered is: " << x << '\n';

	//you can even enter multiiple inputs on a single line

	std::cout << "Enter the first and second number that enter your head: ";

	int first{};
	int second{};

	std::cin >> first >> second;

	std::cout << "The first number is: " << first << " and the second number is: " << second << '\n';
	*/

	std::cout << "Enter two numbers: ";
	
	int x{};	

	std::cin >> x;

	int y{}; 
	
	std::cin >> y;

	std::cout << "The two numbers you entered are: " << x << " and " << y << '\n';
	return 0;
}
