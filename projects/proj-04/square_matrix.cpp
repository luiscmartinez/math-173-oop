#include "square_matrix.h"
#include "iostream"
#include <typeinfo>

// constructors
square_matrix::square_matrix(int n)
{
    size = n;
    data = new double[size * size];
    for (int i = 0; i < size * size; ++i)
    {
        data[i] = 0.0;
    }
}

square_matrix::square_matrix(int n, const std::initializer_list<double> &init_list)
{
    size = n;
    data = new double[size * size];
    std::copy(init_list.begin(), init_list.end(), data);
}

// copy constructor
square_matrix::square_matrix(const square_matrix &matrix) : size(matrix.size * matrix.size)
{
    data = new double[size];
    for (int i = 0; i < size; ++i)
    {
        data[i] = matrix.data[i];
    }
}

// delete constructor
square_matrix::~square_matrix()
{
    delete[] data;
}

// copy assignment operator
square_matrix &square_matrix::operator=(const square_matrix &matrix)
{
    if (size == matrix.size)
    {
        for (int i = 0; i < size * size; ++i)
        {
            data[i] = matrix.data[i];
        }
    }
    else
    {
        delete[] data;
        size = matrix.size;
        data = new double[matrix.size * matrix.size];
        for (int i = 0; i < matrix.size * matrix.size; ++i)
        {
            data[i] = matrix.data[i];
        }
    }
    return *this;
}

double &square_matrix::operator()(int row, int col) const
{
    int index = ((row - 1) * size) + (col - 1);
    return data[index];
}

square_matrix &square_matrix::operator+=(const square_matrix &matrix)
{
    for (int i = 0; i < size * size; ++i)
    {
        data[i] += matrix.data[i];
    }
    return *this;
}

square_matrix &square_matrix::operator-=(const square_matrix &matrix)
{
    for (int i = 0; i < size * size; ++i)
    {
        data[i] -= matrix.data[i];
    }
    return *this;
}

square_matrix &square_matrix::operator*=(const square_matrix &matrix)
{
    double results[size * size];

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            double sum = 0.0;
            for (int k = 0; k < size; ++k)
            {
                sum += data[i * size + k] * matrix.data[k * size + j];
            }
            int index = i * size + j;
            results[index] = sum;
        }
    }

    for (int i = 0; i < size * size; ++i)
    {
        data[i] = results[i];
    }
    return *this;
}

square_matrix operator+(const square_matrix &leftMatrix, const square_matrix &rightMatrix)
{
    square_matrix result(leftMatrix);
    result += rightMatrix;
    return result;
}

square_matrix operator-(const square_matrix &leftMatrix, const square_matrix &rightMatrix)
{
    square_matrix result(leftMatrix);
    result -= rightMatrix;
    return result;
}

square_matrix operator*(const square_matrix &leftMatrix, const square_matrix &rightMatrix)
{
    square_matrix result(leftMatrix);
    result *= rightMatrix;
    return result;
}