#include <iostream>

bool is_triple(int a, int b, int c)
{
    int a2 = a * a;
    int b2 = b * b;
    int c2 = c * c;
    if (a2 + b2 == c2)
    {
        return true;
    }
    return false;
}

int main()
{
    std::cout << is_triple(3, 4, 5) << " should be 1 which means true\n";
    std::cout << is_triple(3, 5, 8) << " should be 0 which means false\n";
    std::cout << is_triple(5, 12, 13) << " should be 1 which means true";
}