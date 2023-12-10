#include <iostream>

class BaseClass
{
public:
    virtual void myMethod()
    {
        std::cout << "Hello little dudes from within BaseClass" << std::endl;
    }
};
// demonstrating a new class named DerivedClass inherits from BaseClass inheritance
class DerivedClass : public BaseClass
{
public:
    // polymorphism because I am overriding a the inherited method to behavior differently
    void myMethod() override
    {
        std::cout << "Hello little dudes from within DerivedClass" << std::endl;
    }
};

int main()
{
    BaseClass b;
    std::cout << "base class method call\n\t";
    b.myMethod();
    DerivedClass d;
    std::cout << "derived class method call\n\t";
    d.myMethod();
}