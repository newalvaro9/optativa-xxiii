#include <iostream>

int main()
{
    int storedNumber, number;
    int digits = 0;

    std::cin >> number;

    storedNumber = number;

    if(number == 0) {
        digits = 1;
    }

    while(number != 0) {
        number /= 10;
        ++digits;
    }

    std::cout << "The number of digits of " << storedNumber << " is " << digits << "." << std::endl;
    return 0;
}