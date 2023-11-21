#pragma once

#include <ostream>
#include <initializer_list>

// Declaration
class square_matrix
{
public:
    square_matrix(int n);                                      // constructor
    square_matrix(int, const std::initializer_list<double> &); // constructor w two args
    square_matrix(const square_matrix &);                      // copy constructor
    square_matrix &operator=(const square_matrix &);
    square_matrix &operator*=(const square_matrix &);
    ~square_matrix();
    friend std::ostream &operator<<(std::ostream &, const square_matrix &);

private:
    double *data = nullptr;
    int size;
};

square_matrix::square_matrix(int n, const std::initializer_list<double> &L)
{
    data = new double[n * n];
    size_t index = 0;

    for (auto i = L.begin(); i != L.end(); ++i)
    {
        data[index] = *i;
        index++;
    }
} // better std::copy or std::ranges::copy from <algorithm>