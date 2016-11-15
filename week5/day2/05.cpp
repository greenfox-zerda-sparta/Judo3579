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
	// Write a program that prints a content of a file called "fifth-exercise.txt"
	  // If it could not open the file it should write: "Could not open the file" to the standard error
	  // The program should return 2 if there where an error

  ifstream fifthExercise;
  fifthExercise.open("fifth-exercise.txt");
  string file_content;

  if (!fifthExercise.is_open()) {
    cerr << "Could not open the file" << endl;
    return 2;
  }


  fifthExercise.close();

  return 0;
}
