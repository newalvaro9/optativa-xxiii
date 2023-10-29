#include <iostream>

int main()
{
    int cat;

    std::cout << "----- Area and Perimeter of a Square -----" << std::endl;

    std::cout << "Enter one cathetus: ";
    std::cin >> cat;

    std::cout << "Area: " << cat * cat << std::endl
              << "Perimeter: " << cat * 4 << std::endl;

    return 0;
}