#include <iostream>

int main()
{
    int hours, minutes, seconds;
    std::cin >> seconds;

    hours = seconds / 3600;
    seconds %= 3600;

    minutes = seconds / 60;
    seconds %= 60;

    std::cout << hours << " " << minutes << " " << seconds << std::endl;
    return 0;
}