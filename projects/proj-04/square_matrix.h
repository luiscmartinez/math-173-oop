#pragma once

#include <initializer_list>
#include <algorithm>

class square_matrix
{
public:
    square_matrix(int);
    square_matrix(int, const std::initializer_list<double> &);
    square_matrix(const square_matrix &);
    ~square_matrix();

private:
    int size;
    double *data = nullptr;
};