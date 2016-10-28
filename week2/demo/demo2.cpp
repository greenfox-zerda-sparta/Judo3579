//============================================================================
// Name        : Hello.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

//	
// It should ask questions like:
//  - Is the number greater than 5? [y/n]
//  - Is the number smaller than 4? [y/n]
// (don't have to ask both kind)
//
// It should wait for input after the question
//
// If the answer is not "y" or "n" it should re-ask the question;
//
// If the program knows enough it should tell the picked number like:
// Your number is: 8

using namespace std;

int main() {
  int number;
  int minimum = 0;
  int maximum = 10;
  char response;
  bool success;


  number = (minimum+maximum)/2;

  cout << "Choose a number between 0 and 10" << endl;
  cout << "Is your number is greater than " << (minimum + maximum)/2 << "? Y/N" << endl;
  cin >> response;

  while(success != true) {
  // while(minimum != maximum) {
    if(response == 'Y') {
      minimum = number - 1;
      success = false;
      cout << "Is your number is greater than  " << minimum << "? Y/N" << endl;
      cin >> response;
    } else if(response == 'N') {
	  maximum = number + 1;
      success = false;
	  cout << "Is your number is greater than " << maximum << "? Y/N" << endl;
	  cin >> response;
	  break;
    }
    }
  cout << "Your number is " << maximum << endl;
  return 0;
}

