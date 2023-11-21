// "Visit" (cout) items in a vector/initializer_list
#include <iostream>
#include <initializer_list>
#include <vector>

int main()
{
    std::vector<int> numbers = {2, 4, 6, 8, 10, 9, 7, 5, 3, 1};
    // range for loop
    for (auto number : numbers)
    {
        std::cout << number << "\n";
    }

    // iterators (vectors also have this functionality too)
    // auto is syntactic sugar for `std::vector<int>::iterator` number = numbers.begin();
    for (auto number = numbers.begin(); number != numbers.end(); ++number)
    {
        std::cout << *number << "\n";
    }

    std::initializer_list<int> number_list = {1, 2, 3, 4, 5};
    for (auto number = number_list.begin(); number != number_list.end(); ++number)
    {
        std::cout << *number << std::endl;
    }
}