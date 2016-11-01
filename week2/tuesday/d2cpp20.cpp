//============================================================================
// Name        : Hello.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;


int howManyTimes(string word, char letter) {
	int number = 0;
// általános formája, hogy végigmegyek egy stringen
	int i = 0;
	while(word[i]!=0){

		if(word[i] == letter) {
		number++;
		}

		i++;
	}

	return number;
}

int main() {
  string word = "makkoshotyka-also";
  char letter = 'o';
  // Write a function that takes a string and a character, and counts how many
  // times the character occures in the string and it should return a number

  int number = howManyTimes(word,letter);
  cout << number;
  return 0;
}
