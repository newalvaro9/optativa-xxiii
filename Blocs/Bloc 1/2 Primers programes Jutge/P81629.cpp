#include <iostream>

int main()
{
    int totalcents, euros, cents, B500, B200, B100, B50, B20, B10, B5, M2, M1, M050, M020, M010, M005, M002, M001;
    std::cin >> euros >> cents;

    totalcents = euros * 100 + cents;

    B500 = totalcents / 50000;
    totalcents %= 50000;

    B200 = totalcents / 20000;
    totalcents %= 20000;

    B100 = totalcents / 10000;
    totalcents %= 10000;

    B50 = totalcents / 5000;
    totalcents %= 5000;

    B20 = totalcents / 2000;
    totalcents %= 2000;

    B10 = totalcents / 1000;
    totalcents %= 1000;

    B5 = totalcents / 500;
    totalcents %= 500;

    M2 = totalcents / 200;
    totalcents %= 200;

    M1 = totalcents / 100;
    totalcents %= 100;

    M050 = totalcents / 50;
    totalcents %= 50;

    M020 = totalcents / 20;
    totalcents %= 20;

    M010 = totalcents / 10;
    totalcents %= 10;

    M005 = totalcents / 5;
    totalcents %= 5;

    M002 = totalcents / 2;
    totalcents %= 2;

    M001 = totalcents / 1;
    totalcents %= 1;

    std::cout << "Banknotes of 500 euros: " << B500 << std::endl;
    std::cout << "Banknotes of 200 euros: " << B200 << std::endl;
    std::cout << "Banknotes of 100 euros: " << B100 << std::endl;
    std::cout << "Banknotes of 50 euros: " << B50 << std::endl;
    std::cout << "Banknotes of 20 euros: " << B20 << std::endl;
    std::cout << "Banknotes of 10 euros: " << B10 << std::endl;
    std::cout << "Banknotes of 5 euros: " << B5 << std::endl;
    std::cout << "Coins of 2 euros: " << M2 << std::endl;
    std::cout << "Coins of 1 euro: " << M1 << std::endl;
    std::cout << "Coins of 50 cents: " << M050 << std::endl;
    std::cout << "Coins of 20 cents: " << M020 << std::endl;
    std::cout << "Coins of 10 cents: " << M010 << std::endl;
    std::cout << "Coins of 5 cents: " << M005 << std::endl;
    std::cout << "Coins of 2 cents: " << M002 << std::endl;
    std::cout << "Coins of 1 cent: " << M001 << std::endl;
    return 0;
}