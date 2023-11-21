#include "Rational.h"
#include <iostream>
// todo: needs more meaningful test
int main() 
{
    Rational x(7,90);
    Rational y(3,54);
    // x+= y;
    // x-= y;
    // x*= y;
    // x/= y;
    std::cout << x << " " << y << std::endl; // this depends on friend
    std::cout << x+y << std::endl;
    // std::user
}