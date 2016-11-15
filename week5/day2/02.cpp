/*
 * 01.cpp
 *
 *  Created on: 2016. nov. 15.
 *      Author: Judo
 */
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main() {

  ifstream secondExercise;
  secondExercise.open("second-exercise.txt");
  string file_content;
  secondExercise >> file_content;
  secondExercise.close();

  return 0;
}
