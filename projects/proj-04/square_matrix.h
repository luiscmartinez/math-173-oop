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
    square_matrix &operator+=(const square_matrix &);
    square_matrix &operator-=(const square_matrix &);
    square_matrix &operator*=(const square_matrix &);
    int num_rows() const { return size; }
    int num_cols() const { return size; }

private:
    int size;
    double *data = nullptr;
};