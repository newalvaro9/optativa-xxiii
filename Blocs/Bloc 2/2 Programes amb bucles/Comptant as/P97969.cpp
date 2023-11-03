#include <iostream>
#include <string>

int main()
{
    std::string input;
    int howManyAs = 0;

    std::getline(std::cin, input);

    int iterator = 0;

    while (iterator < input.length())
    {
        if (input.at(iterator) == 'a')
        {
            ++howManyAs;
        }
        ++iterator;
    }

    std::cout << howManyAs << std::endl;
}