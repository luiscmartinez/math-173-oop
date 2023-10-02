#include <iostream>
#include <vector>

using namespace std;

double sum(vector<double> nums)
{
    double total = 0.0;
    for (int i = 0; i < nums.size(); ++i)
    {
        total = total + nums[i];
    }
    return total;
}
int main()
{
    vector<char> letters = {'a', 'b', 'c', 'd'};
    cout << "The size of letters is " << letters.size() << ".\n";
    vector<double> nums = {3.14, 2.78, 1.404};
    nums.push_back(5.28);
    cout << "The size of nums is " << nums.size() << ".\n";
}