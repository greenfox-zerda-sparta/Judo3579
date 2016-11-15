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

string writeContent(string name, string content) {
  ofstream writeFile;
  writeFile.open(name);
  if (writeFile.is_open()) {
    writeFile << content;
    }
    writeFile.close();
}

int main() {
	// Write a function that writes a string to a file
	  // It should take the filename and the content as a string parameter


  ofstream seventhExercise;
  seventhExercise.open("seventh-exercise.txt");

  seventhExercise << "string" << endl;

  seventhExercise.close();

  return 0;
}
