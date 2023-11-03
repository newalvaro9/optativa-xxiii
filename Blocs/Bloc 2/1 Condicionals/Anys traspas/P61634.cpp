#include <iostream>

int main()
{
    int year;
    bool isLeap = false;
    std::cin >> year;

    if (year % 4 == 0)
    {
        isLeap = true;
        if (year % 100 == 0)
        {
            isLeap = year % 400 == 0;
        }
    }

    std::cout << (isLeap ? "YES" : "NO") << std::endl;

    return 0;
}