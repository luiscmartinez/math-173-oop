#include <iostream>
using namespace std;

void print_stars(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << "*";
    print_stars(n - 1);
}

int main()
{
    print_stars(10);
}