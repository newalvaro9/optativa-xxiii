#include <iostream>

int main()
{
    int number;

    std::cin >> number;

    int i = 1;
    int factorial = 1;

    while (i <= number)
    {
        factorial *= i;
        ++i;
    }

    std::cout << factorial << std::endl;

    return 0;
}