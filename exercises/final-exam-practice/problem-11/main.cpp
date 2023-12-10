#include <iostream>

class NoisyAnimal
{
public:
    virtual void exclaim() const = 0;
};

class Duck : public NoisyAnimal
{
public:
    void exclaim() const override
    {
        std::cout << "Quack!\n"
                  << std::endl;
    }
};

class Cow : public NoisyAnimal
{
public:
    void exclaim() const override
    {
        std::cout << "Mooo!\n"
                  << std::endl;
    }
};

void animal_trigger(NoisyAnimal &animal)
{
    animal.exclaim();
}

int main()
{
    Duck daffy;
    Cow larry;
    animal_trigger(daffy);
    animal_trigger(larry);
}