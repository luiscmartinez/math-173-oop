#include "square_matrix.h"

square_matrix::square_matrix(int n)
{
    size = n * n;
    data = new double[size];
}