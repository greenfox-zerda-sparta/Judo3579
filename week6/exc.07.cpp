/*
 * exc.07.cpp
 *
 *  Created on: 2016. nov. 22.
 *      Author: Judo
 */

#include <iostream>
#include <string>
using namespace std;

// Write a function that can throw two kinds of exceptions: int and const char*
// It should receive an integer.
// It should return a string from the char* array defined below.
// If the integer is larger than 5, throw an integer exception. The value of the exception should be how much larger it is.
// If the integer is less than 0, it should throw a const char* exception stating, that it is a negative number.
//
// Illustrate both cases in the main function.
// HINT: Put each protected code segmetn in a new try-catch block.

const char* sentence[6] = {"What", "a", "pleasant", "surprise", "this", "is."};

string twoExceptions(int a) throw(const char*) {
	const char* sentence;
	if (a > 5) {
    throw "integer exception";
  } else if (a < 0) {
	throw "it is a negative number";
  }
  return sentence;
}




int main() {
  try {
    cout << twoExceptions(3) << endl;
  }
  catch (const char* excp) {
  		cout << "Result: " << excp << endl;
  	}
  return 0;
}

