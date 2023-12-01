#pragma once

#include <initializer_list>
#include <algorithm>

class square_matrix
{
public:
    square_matrix(int);
    square_matrix(int, const std::initializer_list<double> &);

private:
    int size;
    double *data = nullptr;
};