#include <iostream>

int main()
{
    int a, b;

    std::cin >> a >> b;

    int bigger = (a > b) ? a : b;
    int smaller = (a < b) ? a : b;

    while (bigger >= smaller)
    {
        std::cout << bigger << std::endl;
        --bigger;
    }

    return 0;
}