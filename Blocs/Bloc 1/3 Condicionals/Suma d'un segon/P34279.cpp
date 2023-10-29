#include <iostream>

int main()
{
    double hours, minutes, seconds;
    std::cin >> hours >> minutes >> seconds;

    seconds += 1;

    if (seconds >= 60)
    {
        seconds = 0;
        minutes += 1;
    }

    if (minutes >= 60)
    {
        minutes = 0;
        hours += 1;
    }

    if (hours >= 24)
    {
        hours = 0;
    }

    std::cout << (hours < 10 ? "0" : "") << hours << ":"
              << (minutes < 10 ? "0" : "") << minutes << ":"
              << (seconds < 10 ? "0" : "") << seconds << std::endl;
    return 0;
}