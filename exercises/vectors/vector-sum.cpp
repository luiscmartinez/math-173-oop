#include <iostream>
#include "vector-sum.h"

double sum(std::vector<double> nums)
{
    double total = 0.0;
    for (int i = 0; i < nums.size(); ++i)
    {
        total = total + nums[i];
    }
    return total;
}
