/*
 * student.h
 *
 *  Created on: 2016. nov. 8.
 *      Author: Judo
 */

#ifndef STUDENT_H_
#define STUDENT_H_
#include <iostream>
#include <string>
using namespace std;

class Student {
  private:
    int grade;
    int arrayGrade[5];
    float average;
  public:
    Student(int grade, int arrayGrade[], float average);
    void add_grade(int grade, int arrayGrade[]);
    float get_average(int grade, int arrayGrade[], float average);
};



#endif /* STUDENT_H_ */
