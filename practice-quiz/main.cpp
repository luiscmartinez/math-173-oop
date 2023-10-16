#include <iostream>

using namespace std;

// 1A
double circle_area(double r)
{
    return r * 3.14;
}

double BMI(double mass, double height)
{
    return mass / (height * height);
}

double average(const vector<int> &nums)
{
    int total = 0.0; // why 0.0 ?
    for (int i = 0; i < nums.size(); ++i)
    {
        total += nums[i];
    }
    // multiply average by 1.0 will upgrade your into to a double
    return (total / nums.size()) * 1.0;
}

int sum_digits(int n)
{
    int sum = 0;
    while (n > 10)
    {
        sum = n % 10; // gets the last number
        n = n / 10;   // removes the last number
    }
    return sum;
}

int sum_squares(int n)
{
    if (n == 0)
        return 1;
    n *n + sum_squares(n - 1);
}

int main()
{
    for (int x = 0; x <= 30; ++x)
    {
        for (int y = 0; y <= 10; ++y)
        {
            if ((x * x) + (y * y) == 1000)
            {
                cout << x << " and " << y << " are solutions.\n";
            }
        }
    }
    // int x = 2
    // int& y = x
    // & = means stored in the same exact place in memory.
}
