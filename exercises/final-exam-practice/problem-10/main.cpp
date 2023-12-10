#include <iostream>

class dataset
{
public:
    dataset() { data = new double[100]; }
    dataset(const dataset &other);
    ~dataset() { delete[] data; }
    dataset &operator=(const dataset &other)
    {
        for (int i = 0; i < 100; ++i)
        {
            data[i] = other.data[i];
        }
        return *this;
    }

private:
    double *data = nullptr;
};

int main()
{
    dataset mySet;
    dataset urSet;
    urSet = mySet;
}