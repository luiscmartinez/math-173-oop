#include <iostream>

int main()
{
    double left[] = {1, 2, 3, 4};
    double right[] = {1, 2, 1, -1};
    double result[4] = {0.0, 0.0, 0.0, 0.0};
    // do computation, print result
    // define r for total number of matrix rows
    int r = 2;
    for (int i = 1; i < 3; ++i)
    {
        for (int j = 1; j < 3; ++j)
        {
            for (int k = 0; k < 2; ++k)
            {
                int index = ((i - 1) * 2) + (j - 1);
                result[index] += left[(i - 1) * r + k] * right[j - 1 + k * r];
            }
        }
    }
    // logs out answers
    for (int i = 0; i < 4; ++i)
    {
        std::cout << result[i] << "\n";
    }
}