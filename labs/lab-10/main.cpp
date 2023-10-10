#include <iostream>

using namespace std;

double us_count(int q, int d, int n, int p)
{
    return ((q * 0.25) + (d * 0.10) + (n * 0.05) + (p * 0.01));
}

int main()
{
    cout << us_count(3, 2, 3, 0);
}