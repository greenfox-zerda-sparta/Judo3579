#include <iostream>
#include <string>

#include "student.h"

using namespace std;

Student::Student(int grade, int count, double average) {
  this->grade = grade;
  this->average = average;
  array[] = 0;
};

void Student::add_grade(int grade) {
  this->grade = grade;
  arrayGrade[array] = grade;
  array++
};

float Student::get_average(int grade, int count, float average) {
  this->grade = grade;
  this->average = average;
  this->count = count;
  float sum = 0;
    for (int i = 0; i < array; i++) {
      sum += arrayGrade[i];
    }
    return sum / array;


}
