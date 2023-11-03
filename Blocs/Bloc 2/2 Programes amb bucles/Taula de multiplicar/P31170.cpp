#include <iostream>

int main()
{
    int number;


    do
    {
        std::cin >> number;

    } while (number < 1 or number > 9);

    int iterator = 0;

    while (iterator < 10)
    {
        std::cout << number << "*" << (iterator + 1) << " = " << number * (iterator + 1) << std::endl;
        ++iterator;
    }

    return 0;
}