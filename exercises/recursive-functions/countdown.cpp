#include <iostream>

int countdown(int n)
{
    if (n == 0)
    {
        std::cout << "0";
        return 0;
    }

    else
    {
        std::cout << n << "\n";
        return countdown(n - 1);
    }
}

int main()
{
    countdown(10);
}