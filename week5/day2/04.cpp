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
	// Open a file called "fourth-exercise.txt"
	  // Print all of its lines to the terminal window

  ifstream fourthExercise;
  fourthExercise.open("fourth-exercise.txt");
  string file_content;

  if (fourthExercise) {
    while (fourthExercise >> file_content) {
      cout << file_content << endl;
    }
  }

  fourthExercise.close();

  return 0;
}
