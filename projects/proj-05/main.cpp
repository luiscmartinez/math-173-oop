#include <iostream>
#include <random>

int main()
{
    std::default_random_engine e;
    std::uniform_real_distribution<double> u(-1, 1);

    int count = 0;
    for (int i = 0; i < 10000; ++i)
    {
        double x, y;
        x = u(e);
        y = u(e);
        if (x * x + y * y < 1.0)
        {
            count++;
        }
    }

    std::cout << 4.0 * count / 10000;
}