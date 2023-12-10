#include <iostream>
#include <ostream>
#include <iomanip>

class Totaler
{
public:
    Totaler()
    {
        total = 0;
    }
    double &operator()(double n)
    {
        total = total + n;
        return total;
    }

    friend std::ostream &operator<<(std::ostream &out, const Totaler &t)
    {
        out << t.total;
        return out;
    }

private:
    double total;
};

int main()
{
    Totaler myTotal;
    std::cout << myTotal << " should be zero\n";
    myTotal(3.5);
    std::cout << myTotal << " should be 3.5\n";
    myTotal(-1.5);
    std::cout << myTotal << " should be 2\n";
    myTotal(10.1);
    std::cout << myTotal << " should be 12.1";
}