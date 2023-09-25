#include <iostream>
#include <vector>

using namespace std;

double average(vector<double> nums)
{
    double total = 0;
    for (auto &x : nums)
    {
        total += x;
    }
    return total / nums.size();
}

int main()
{
    vector<double> nums = {1, 1, 4};
    cout << "The average of our data is " << average(nums) << ".\n";
}