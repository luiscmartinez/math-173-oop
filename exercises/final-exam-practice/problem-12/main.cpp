#include <iostream>
#include <cmath>

class Figure2D
{
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual ~Figure2D() = default;
};

class Triangle : public Figure2D
{
public:
    Triangle(double sideA, double sideB, double sideC)
    {
        a = sideA;
        b = sideB;
        c = sideC;
    }

    double area() const override
    {
        double s = (a + b + c) / 2;
        double radicand = s * (s - a) * (s - b) * (s - c);
        return sqrt(radicand);
    }
    double perimeter() const override
    {
        return a + b + c;
    }

private:
    double a, b, c;
};

int main()
{
    Triangle myTriangle(2, 3, 4);
    std::cout << "The area of my triangle is " << myTriangle.area() << std::endl;
    std::cout << "The perimeter of my triangle is " << myTriangle.perimeter();
}