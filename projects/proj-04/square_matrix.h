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
    square_matrix &operator=(const square_matrix &);
    double &operator()(int row, int col) const;

private:
    int size;
    double *data = nullptr;
};