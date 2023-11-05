#include "Rational.h"
#include <iostream>

int main() 
{
    Rational x(1,2);
    Rational y(1,4);
    x+= y;
    std::cout << x << " " << y << std::endl; // this depends on friend
}