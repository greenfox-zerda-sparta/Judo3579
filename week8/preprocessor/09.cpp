//============================================================================
// Name        : vizsga3.cpp
// Author      : haha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// Create a function like macro. The Macro should take one parameter and
// print out the parameter to the console after printing out in which file
// and at which line it has been called at.

#include <iostream>

using namespace std;

#define PRINT(x) cout << "The file name is: " << __FILE__ << " and in line " << __LINE__ << ", parameter: " << x << endl;

int main() {
  PRINT(82);
  return 0;
}


