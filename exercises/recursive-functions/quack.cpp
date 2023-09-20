#include <iostream>

// Quack! n times
void quack(int n)
{
    if (n == 0)
        return;
    else
    {
        std::cout << "Quack!\n";
    }
    return quack(n - 1);
}

int main()
{
    // need to find short to write std::cout
    std::cout << "Five quacks:\n";
    quack(5);
}