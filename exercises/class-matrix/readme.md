### SquareMatrix class usage:
```
#include class-matrix.h
square_matrix fooBar (2); // creates instance fooBar
```
## Matrix practice:
<!-- todo: add examples on how to use square_matrix class -->

n x n matrix

i-th row * j-th column

these are the indies for row i ((i-1) * n), (i - 1) * n + 1

{ j-1, j-1 + n, j-1 + 2n }
Column j has indices:
| 1 2 3 4 |
| 5 6 7 8 |
| 9 10 11 12 |
| 13 14 15 16 |

double sum = 0.0;
for (int k = 0; k < n; ++k) 
{
    sum += result[(i - 1) * (n + k)] * result[(j-1) + (k*n)]
}
