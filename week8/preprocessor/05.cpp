//============================================================================
// Name        : vizsga3.cpp
// Author      : haha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


#define str(a) #a



int main() {
	// Define a function like macro that prints out the parameter it gets,
	// and adds this string before it "DEBUG: " if __DEBUG is defined.
	// Otherwise adds "RELEASE: " before the string.
	// Use try it out. Illustrate that it works.

#ifdef __DEBUG
#define PRINT(a) printf("DEBUG: "#a)
#else
#define PRINT(a) printf("RELEASE: "#a)
#endif


int main() {

  PRINT(this);
  return 0;
}

