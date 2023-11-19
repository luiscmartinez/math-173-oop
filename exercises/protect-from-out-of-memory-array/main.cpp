#include <iostream>

// the best way to avoid memory leaks is not to use keyboards new or delete;
// if you use a new, then you must use a delete
// else use new and delete in constructions

int main()
{
    // int *nums = new int[10]; // this is a c array
    std::cout << "How many ints?";
    int n;
    std::cin >> n;
    int *nums = new int[n]; // if there is no delete you'll have a memory leak;
    if (nums != nullptr)
    {
        std::cout << "not nullptr"
                  << "\n";
        std::cout << nums[2];
    }
    else
    {
        std::cout << "is nullptr";
    }
}