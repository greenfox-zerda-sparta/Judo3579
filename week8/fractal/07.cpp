//============================================================================
// Name        : vizsga3.cpp
// Author      : haha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <string>

using namespace std;

string change_x_to_y(string word) {
	string result = "";
	  if (word[0] == 'x') {
	    result += 'y';
	  } else {
	    result += word[0];
	  }
	  word.erase(word.begin(), word.begin() + 1);
	  if (word.size() > 0) {
	    result += change_x_to_y(word);
	  }
	  return result;
	}

int main() {
  // Given a string, compute recursively (no loops) a new string where all the
  // lowercase 'x' chars have been changed to 'y' chars.
  string word = "Xylophon!";
  cout << "Before change: " << word << endl;
  cout << "After change: " << change_x_to_y(word) << endl;
  return 0;
}
