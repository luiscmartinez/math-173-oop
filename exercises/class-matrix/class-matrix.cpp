#include "class-matrix.h"

// define constructor
square_matrix::square_matrix(int n)
{
    // below inside operator<< func's definition
    // I need to know array size on runtime
    // in order to loop entirely thru its elements
    size = n * n;
    data = new double[size]; // allocates memory for an array with type double;
    // populating data with integer values ...
    for (int i = 0; i < size; ++i)
    {
        data[i] = i + 2;
    }
}

// define destructor
square_matrix::~square_matrix()
{
    //? square brackets ensure destructor func gets called ?
    delete[] data;
}

std::ostream &operator<<(std::ostream &out, const square_matrix &a)
{
    // todo: fix creating new row formatting logic;
    out << "|";
    for (int i = 0; i < a.size; ++i)
    {
        out << "   " << a.data[i] << "   ";
        //! fix: if matrix is not a 2x2 than formatting output will not display correctly
        if (i == 1)
        {
            out << "|\n";
            out << "|";
        }
    }
    out << "|";

    return out;
}