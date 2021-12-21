#include <iostream>
#include "alchakov.h"
#include "factorial.h"
#include "golban.h"

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

    /////////////////////////////////////////////
    // Dementiev
    std::cout << "Dementiev K.V. | start factorial(n) test:" << std::endl;
    for (int n = 0; n < 16; n++) {
        std::cout << "factorial(" << n << ") = " << factorial(n) << std::endl;
    }
    std::cout << "test finished..." << std::endl;
    /////////////////////////////////////////////

    /////////////////////////////////////////////
    //Golban
    std::cout << "*********************" << std::endl;
    std::cout << "Golban: " << cubeA(a) << std::endl;
    std::cout << std::endl;
    /////////////////////////////////////////////
    c = a + b;
    d = a - b;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    std::cout << "Hello World!\n";
}