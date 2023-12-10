#include <iostream>

class dataset
{
public:
    dataset() { data = new double[100]; }
    dataset(const dataset &other)
    {
        data = new double[100];
        for (int i = 0; i < 100; ++i)
        {
            data[i] = other.data[i];
        }
    }
    ~dataset() { delete[] data; }
    dataset &operator=(const dataset &other);

private:
    double *data = nullptr;
};

int main()
{
    dataset mySet;
    dataset urSet = mySet;
}