#include <iostream>

int main()
{
    int number;

    std::cout << "----- Multiplication Table Finder -----" << std::endl;

    do
    {
        std::cout << "Enter a number lower than 10: ";
        std::cin >> number;

    } while (number > 10);

    for (int i = 0; i < 10; i++)
    {
        std::cout << number << " x " << (i + 1) << " = " << number * (i + 1) << std::endl;
    }

    return 0;
}