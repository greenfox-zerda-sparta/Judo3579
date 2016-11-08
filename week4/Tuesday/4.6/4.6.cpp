#include <iostream>
#include <string>

#include "Circle.h"


using namespace std;

Circle::Circle(int radius) {
  this->radius = radius;
}
double Circle::get_area() {
  this->area = 2 * this->radius * 3.14;
}
double Circle::get_circumference() {
  this->circumference = this->radius * this->radius * 3.14;
}


