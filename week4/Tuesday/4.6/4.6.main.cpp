#include <iostream>
#include <string>

#include "Circle.h"

using namespace std;

/*class Circle {
  private:
    double radius;
    double area;
    double circumference;
  public:
    Circle(int radius) {
      this->radius = radius;
    }
  double get_area() {
	  this->area = 2 * this->radius * 3.14;
  }
  double get_circumference() {
	  this->circumference = this->radius * this->radius * 3.14;
  }
}; */

int main() {
    // Create a `Circle` class that takes it's radius as constructor parameter
    // It should have a `get_circumference` method that returns it's circumference
    // It should have a `get_area` method that returns it's area

  Circle circle(7);
  cout << circle.get_area() << endl;
  cout << circle.get_circumference() << endl;
  return 0;
}
