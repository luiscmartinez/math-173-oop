#include <iostream>
#include "square_matrix.h"
#include <initializer_list>

using namespace std;

int main()
{
    square_matrix myMatrix(2);
    square_matrix urMatrix(3);
    square_matrix aMatrix(3, {3, 2, 10, 4, 5, 6, 7, 8, 9});
    square_matrix bMatrix(3, {2, 4, 3, 4, 5, 6, 7, 8, 9});
    myMatrix = urMatrix;
    // std::cout << "\n member access returns " << aMatrix(3, 2) << std::endl;
    aMatrix += bMatrix;
    aMatrix -= bMatrix;
    aMatrix *= bMatrix;
}