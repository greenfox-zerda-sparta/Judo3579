/*
 * Circle.h
 *
 *  Created on: 2016. nov. 8.
 *      Author: Judo
 */
#include <iostream>
#include <string>
#ifndef CIRCLE_H_
#define CIRCLE_H_

class Circle {
  private:
    double radius;
    double area;
    double circumference;
  public:
    Circle(int radius);  /* {
      this->radius = radius;
    }
  double get_area() {
      this->area = 2 * this->radius * 3.14;
  }
  double get_circumference() {
      this->circumference = this->radius * this->radius * 3.14;
  } */
};

#endif /* CIRCLE_H_ */
