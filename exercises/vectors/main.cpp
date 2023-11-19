#include <iostream>
#include <vector>

int main()
{
    std::vector<char> letters = {'a', 'b', 'c', 'd'};
    std::cout << "The size of letters is " << letters.size() << ".\n";
    std::vector<double> nums = {3.14, 2.78, 1.404};
    nums.push_back(5.28);
    std::cout << "The size of nums is " << nums.size() << ".\n";
}