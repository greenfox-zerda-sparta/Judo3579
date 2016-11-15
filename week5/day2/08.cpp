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

bool copiesFile(string name, string content) {
  ofstream copiesFile;
  copiesFile.open(name);
  if (copiesFile.is_open()) {
    copiesFile << content;
    copiesFile.close();
    }
  return true;
}

int main() {
	// Write a function that copies a file to an other
	// It should take the filenames as parameters
	// It should return a boolean that shows if the copy was successful


  ofstream eighthExercise;
  eighthExercise.open("duplicated-chars.txt");

  eighthExercise << "string" << endl;

  eighthExercise.close();

  return 0;
}
