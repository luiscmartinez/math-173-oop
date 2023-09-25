#include <iostream>
#include <vector>

using namespace std;

double average(vector<double> nums)
{
    double total = 0;
    for (int i = 0; i < nums.size(); ++i)
    {
        total += nums[i];
    }
    return total / nums.size();
}

int main()
{
    vector<double> nums = {1, 1, 4};
    cout << "The average of our data is " << average(nums) << ".\n";
}