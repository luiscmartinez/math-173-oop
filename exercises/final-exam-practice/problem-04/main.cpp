#include <iostream>

int gcd(int a, int b, int c)
{
    if (a == b & b == c)
    {
        return a;
    }
    int *largest = nullptr;
    int *smallest = nullptr;
    if (a > b)
    {
        if (a > c)
        {
            largest = &a;
        }
        else
        {
            largest = &c;
        }
    }
    else
    {
        if (b > c)
        {
            largest = &b;
        }
        else
        {
            largest = &c;
        }
    }
    if (a < b)
    {
        if (a < c)
        {
            smallest = &a;
        }
        else
        {
            smallest = &c;
        }
    }
    else
    {
        if (b < c)
        {
            smallest = &b;
        }
        else
        {
            smallest = &c;
        }
    }
    *largest = *largest - *smallest;
    return gcd(a, b, c);
}

int main()
{
    std::cout << gcd(10, 25, 30);
}