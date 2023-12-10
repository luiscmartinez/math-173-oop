#pragma once

#include <initializer_list>

class square_matrix
{
public:
    square_matrix(int);

private:
    int size;
    double *data = nullptr;
};