#include <iostream>

int main()
{
    double left[] = {1, 2, 3, 4};
    double right[] = {1, 2, 1, -1};
    double result[4];
    // do computation, print result
    // define totalRows
    int totalRows = 2;
    for (int i = 1; i < 3; ++i)
    {
        for (int j = 1; j < 3; ++j)
        {
            int space = ((i - 1) * totalRows) + (j - 1);
            std::cout << "space is " << space << " when i is " << i << " and j is " << j << std::endl;
        }
    }
    std::cout << result[0];
}