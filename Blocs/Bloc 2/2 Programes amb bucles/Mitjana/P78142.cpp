#include <iostream>
#include <iomanip>

int main()
{
    double number, total = 0.0, average = 0.0;
    int numbers = 0;

    while (std::cin >> number)
    {

        if (std::cin.peek() == '\n')
        {
            std::cin.clear(std::ios::eofbit); // https://stackoverflow.com/a/69111956/16268938
        }
        total += number;
        ++numbers;
    }

    std::cout << std::fixed << std::setprecision(2) << total / numbers << std::endl;
}