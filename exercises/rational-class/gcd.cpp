#include <iostream>

// Greatest Common Divisor
int gcd(int num1, int num2)
{
    while (num1 != num2)
    {
        if (num1 < num2)
        {
            num2 = num2 - num1;
        }
        else
        {
            num1 = num1 - num2;
        }
    }
    return num1;
}
