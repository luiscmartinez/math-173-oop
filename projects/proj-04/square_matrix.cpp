#include "square_matrix.h"

square_matrix::square_matrix(int n)
{
    size = n * n;
    data = new double[size];
    for (int i = 0; i < size * size; ++i)
    {
        data[i] = 0.0;
    }
}

square_matrix::square_matrix(int n, const std::initializer_list<double> &init_list)
{
    size = n * n;
    data = new double[size];
    std::copy(init_list.begin(), init_list.end(), data);
}