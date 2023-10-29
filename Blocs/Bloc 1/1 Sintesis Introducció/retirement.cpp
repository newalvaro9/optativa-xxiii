#include <iostream>
#include <string>

int main()
{
    std::string name;
    int age;
    int retirementAge = 65;

    std::cout << "Quin és el teu nom?: ";
    std::cin >> name;

    std::cout << "Quina és la teva edat: ";
    std::cin >> age;

    if (age >= retirementAge)
    {
        std::cout << "Hola " << name << "! Ja estàs jubilat." << std::endl;
    }
    else
    {
        std::cout << "Hola " << name << "! Ja només et queden " << retirementAge - age << " anys per jubilar-te!" << std::endl;
    }
    return 0;
}