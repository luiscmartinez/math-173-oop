#pragma once

class Rectangle {
public:
  Rectangle(double, double);
  double area() const;
  double perimeter() const;
private:
  double length, width;
};

