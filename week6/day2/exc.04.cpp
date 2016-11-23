/*
 * exc.04.cpp
 *
 *  Created on: 2016. nov. 22.
 *      Author: Judo
 */

#include <iostream>
#include <string>
using namespace std;

// Write a function that receives a string and an unsigned integer.
// The function should return an array of strings, with two string in it.
// The first string should be the first part of the original string
// Characters in range [0,index-1].
// The second part should be the rest of the string characters range [index,length-1]
// Example: split("Rebarbara", 2)
// Result: {"Re", "barbara"}
// If the index is out of bounds, throw an exception.
//
// In the main function demonstrate the function when working, and when throwing an exception.
// Write the results to the console.

string split(string a, unsigned int b) throw(const char*) {
  string* result = new string[2];
  string array1;
  string array2;
  if (a.length() < b) {
    throw "exception";
  } else {
  for (unsigned int i = 0; i < b; i++) {
    array1 += a[i];
  } for (unsigned int j = 0; j < a.length(); j++) {
	array2 += a[j];
  result[0] = array1;
  result[1] = array2;
  }
  return result;
}

int main() {
	try {
		string* result0 = split("Rebarbara", 2);
		string* result1 = split("Rebarbara", 20);
		cout << "split " << result1 << endl;
		cout << "split " << result2 << endl;
	}
	catch (const char* excp) {
		cout << "Result: " << excp << endl;
	}
	return 0;
}
