#include <iostream>

int return5()
{
    std::cout << 5 << '\n';

    return 5;
}

void returnnothing()
{

}

int main()
{
    return5();
    returnnothing();
    //std::cout << returnnothing(); will give a compile error
}
