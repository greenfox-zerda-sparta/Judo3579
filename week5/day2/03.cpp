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
	 // Open a file called "third-exercise.txt"
	  // Write numbers from 0 to 20 into the file each in a new line
  ofstream thirdExercise;
  thirdExercise.open("third-exercise.txt");

  for (int i = 0; i < 20; i++) {
	thirdExercise << i;
  }

  thirdExercise.close();

  return 0;
}
