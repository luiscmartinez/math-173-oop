#include <iostream>

class Duck
{
public:
    Duck() { std::cout << "Quack!\n"; }
    Duck(const Duck &d) { std::cout << "CopyQuack!\n"; }
    ~Duck() { std::cout << "Bye! Duck\n"; }
};

void my_duck(Duck &d)
{
    d = Duck();
}
// calls copy constructor
void your_duck(Duck d)
{
    d = Duck();
}

int main()
{
    Duck daffy; // calls default constructor
    my_duck(daffy); // default constructor
    your_duck(daffy); // copy constructor
}