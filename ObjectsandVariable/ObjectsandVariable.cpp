#include <iostream>

int main() 
{
	std::cout << 5; //Prints the literal number 5
	std::cout << -6.7; //Prints the literal number -6.7
	std::cout << 'H'; //Prints the literal character 'H'
	std::cout << "Hello" << std::endl; //Prints the literal text "Hello

	//in c++ direct memory access is dicouraged. 
	//we access memory through an object
	//an object is a region of space(RAM or CPU register) that hold value.
	//the compiler figures out the specific memory location and how to retreive the value
	//and object with a name is called a variable

	int x; //variable defined named x of type int
	
	//Data types
	//int is a number that doesnt have a fraction component(whether negative or positive)

	double y; //another type of variable

	//c++ allows us to even create our own variable types

	/*
	int a;
	int b;
	can be written as:
	*/
	int a, b;

	//variable assignment:

	int width;
	width = 10; //assigns value 10 to the width variable

	std::cout << width; //outputs value 10

	width = 7; //changes value of width to 7

	std::cout << width; //outputs 7

	//you can initialize a variable with an initial value

	int height = 10; //copy-initialization

	int e (8); //direct-initialization

	//mordern initialization forms:
	int f{ 377 }; //direct-list-initialization

	int g{}; //value-initialization

	//int example{ 4.2 }; //compile error: it doesnt allow narrowing conversions

	int w{};

	std::cout << w << std::endl;
	
	//it is best practice to initialize your variables upon creation

	//sometimes you dont use the variables that you initialized
	//int number{ 30 }; //if this isnt used later then the compiler might flag an error

	[[maybe_unused]] int number{ 30 }; //this tells the compiler that this variable might not be used

	return 0;
}