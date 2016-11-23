/*
 * exc.05.cpp
 *
 *  Created on: 2016. nov. 22.
 *      Author: Judo
 */

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

// Write a function that receives a string and a character.
// The function should return an array of strings.
// The function should split the string at the character it receives as the second argument.
// The character it uses to split should not be in any of the new strings.
// Example: split("What a nice day", ' ');
// Result: {"What", "a", "nice",  "day"}
// If the character is not in the string throw an exception.
//
// In the main function demonstrate the function when working, and when throwing an exception.
// Write the results to the console.

vector<string> split(string& str, char& b) throw(const char*) {
  unsigned int count = 0;
    for (unsigned int i = 0; i < str.length(); i++) {
      if (str[i] == b) {
        count++;
      }
      string buf;
      stringstream ss(str);
      vector<string> tokens;
      while (ss >> buf) {
          tokens.push_back(buf);
      }
  return tokens;
}

int main() {
	vector<string> text;
	try {
		text = split("What a nice day", ' ') << endl;
	}
	catch (const char* excp) {
		cout << "Result: " << excp << endl;
	}
	return 0;
}
