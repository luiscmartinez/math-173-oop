## How to use an initializer list?
initializer_list<int> nums = {1, 2, 3};

// accessed using iterators

// which are generalized pointers

### Example
`begin()`: returns iterator to front of list

`end()`: returns iterator to an imaginary object one past the back of the list

Also initializer_list has member operator ++

Visit every member of the list:
```
for (auto i = nums.begin(); i != nums.end(); ++i) 
{
    std::cout << *i;
}
```
