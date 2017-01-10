//============================================================================
// Name        : vizsga3.cpp
// Author      : haha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;


#define EXPRESSION(x) (!(x)) ? (printf("ERROR: The expression is false!!")) : (printf("It's true!"))

int main() {

// Create a function like macro, that gets an expression as it's input.
// If the expression is false, it should print out some error message.

  int a = 2;
  int b = 8;
  EXPRESSION(a > b);
  cout << endl;
  EXPRESSION(a < b);
  return 0;
}


