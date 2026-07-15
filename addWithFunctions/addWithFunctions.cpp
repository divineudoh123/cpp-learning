#include <iostream>

//function to take two integer arguments and return the sum
int addNumbers(int x, int y)
{
	return x + y;
}

int main() {
	std::cout << addNumbers(4,5) << '\n';
}