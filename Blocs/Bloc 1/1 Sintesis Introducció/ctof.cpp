#include <iostream>

int main()
{
    float celsius, fahrenheit;

    std::cout << "Introdueix la temperatura en graus Celsius: ";
    std::cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;

    std::cout << "La temperatura en graus Fahrenheit és: " << fahrenheit << std::endl;
    return 0;
}