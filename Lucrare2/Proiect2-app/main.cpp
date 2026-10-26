#include <iostream>
#include "calculator.h"

int main() 
{
    int a = 10;
    int b = 5;

    std::cout << "Adunare: " << adunare(a, b) << std::endl;
    std::cout << "Scadere: " << scadere(a, b) << std::endl;

    return 0;
}