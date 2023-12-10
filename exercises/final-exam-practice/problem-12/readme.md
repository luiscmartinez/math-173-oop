Derive class Triangle from class Figure2D below.
A triangle has three vertices (or Points). The area of the triangle with side lengths a, b, c is
√A= s(s−a)(s−b)(s−c)
where s = a+b+c .
The perimeter of a triangle is a + b + c. Give the minimum required implementation to make class Triangle a concrete class.

```
class Figure2D{
    public:
        virtual double area() const = 0;
        virtual double perimeter() const = 0;
        virtual ~Figure() = default;
};
```
