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

void printTriangle(int i, int j) {
  if( i > j ){
  return;
}
  for(i = 1; i <= 6; i++) {
    for(j = 1; j < i; j++) {
	  cout << "*";
	  }
	cout << "\n";
  }
}

int main() {
  // create a function that takes a number and prints a triangle like this:
  // *
  // **
  // ***
  // ****
  // *****
  //
  // The triangle should have as many lines as the value in the argument
  int i;
  int j;
  printTriangle(i, j);
  return 0;
}
