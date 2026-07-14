#include <iostream>

void doPrint()
{
    std::cout << "In doPrint()\n";
}

int main()
{
    std::cout << "Starting main()\n";

    doPrint(); // Interrupt main() by making a function call to doPrint().  main() is the caller.
    doPrint();

    std::cout << "Ending main()\n";
}
