#include <iostream>
#include "alchakov.h"

int main()
{
    int a, b, c, d;
    a = 5;
    b = 2;
    /////////////////////////////////////////////
    // Alchakov
    std::cout << "alchakov: " << sumAB(a, b) << std::endl;
    std::cout << std::endl;
    /////////////////////////////////////////////
    c = a + b;
    d = a - b;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    std::cout << "Hello World!\n";
}