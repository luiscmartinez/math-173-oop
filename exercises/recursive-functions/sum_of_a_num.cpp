#include <iostream>

int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return n + sum(n - 1);
}

int main()
{
    std::cout << "1+2+3+...10="
              << sum(10) << ".\n"
              << "1+2+3+4+5="
              << sum(5) << ".\n";
}
