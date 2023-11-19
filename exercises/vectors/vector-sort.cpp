#include "vector-sort.h"

double sort(std::vector<double> nums)
{
    // by default sort will compare the first member of the pair if tied than compares second member
    std::sort(nums.begin(), nums.begin() + 4);
    return nums;
}