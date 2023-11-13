#pragma once

#include <ostream>

// Declaration
class square_matrix
{
public:
    square_matrix(int n);
    // todo: add another constructor that accepts `{1, 3, 5, 2}` as 2nd argument
    ~square_matrix();
    friend std::ostream &operator<<(std::ostream &, const square_matrix &);

private:
    double *data = nullptr;
    int size;
};