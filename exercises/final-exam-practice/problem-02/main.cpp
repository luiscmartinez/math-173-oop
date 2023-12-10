#include <iostream>

int int_sqrt(int n)
{
    // Heron's method
    double threshold = 0;
    double s = n;

    while ((s - n / s) > threshold)
    {
        s = (s + n / s) / 2;
    }
    return s;
}

int main()
{
    std::cout << int_sqrt(10);
}