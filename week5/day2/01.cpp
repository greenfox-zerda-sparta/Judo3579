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

  ofstream firstExercise;
  firstExercise.open("first-exercise.txt");

  firstExercise << "ij \n";
  firstExercise.close();

  // Open a file called "first-exercise.txt"
 // Write your name in it as a single line

  return 0;
}
