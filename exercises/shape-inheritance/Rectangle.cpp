#include "Rectangle.h"

Rectangle::Rectangle(double l, double w):
length(l), width(w) // initializes - 
  {
    width = w; // assignment statement (two step process)
    length = l;
  }

double Rectangle::area() const {
  return length*width;
}

double Rectangle::perimeter() const {
  return 2*(length + width);
}
