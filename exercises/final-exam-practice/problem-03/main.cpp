#include <iostream>

int max3(int a, int b, int c)
{
    int biggest = 0;
    if (a < b)
    {
        if (b < c)
        {
            biggest = c;
        }
        else
        {
            biggest = b;
        }
    }
    else
    {
        if (a < c)
        {
            biggest = c;
        }
        else
        {
            biggest = a;
        }
    }
    return biggest;
}

int main()
{
    std::cout << max3(2, 4, 9);
}