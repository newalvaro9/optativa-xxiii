#include <iostream>
#include <iomanip>

int main()
{
    double number, total = 0.0, average = 0.0;
    int numbers = 0;

    while (std::cin >> number)
    {
        total += number;
        ++numbers;

        if (std::cin.get() == '\n')
        {
            break;
        }
    }

    std::cout << std::fixed << std::setprecision(2) << total / numbers << std::endl;
}