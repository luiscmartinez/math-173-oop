#include <iostream>

int main()
{
    int nums[] = {2, 4, 6, 8, 10};

    for (int i = 0; i < 5; ++i)
    {
        // nums return memory address of the first index
        std::cout << *(nums + i) << "\n"; // repeated additions of i reveal the collection of elements
    }
    std::cout << std::endl;
}