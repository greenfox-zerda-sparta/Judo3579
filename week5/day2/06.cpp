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

string readContent(string name) {
  string file_content;
  ifstream readFile;
  readFile.open(name);
  if (readFile.is_open()) {
    readFile >> file_content;
    }
    readFile.close();
    return name;
}

int main() {
	// Write a function that reads the content of a file and returns it as a string
	// It should take the filename as a string parameter

  ofstream sixthExercise;
  sixthExercise.open("sixth-exercise.txt");

  sixthExercise.close();

  return 0;
}
