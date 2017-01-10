//============================================================================
// Name        : vizsga3.cpp
// Author      : haha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#define CONSTANT 2



int main() {
	// Create a constatn using a prepocesor directive.
	// Print it out to the console.
	// Undefine it. And then redefine it with a new value.


cout << CONSTANT << endl;
#undef CONSTANT
#define CONSTANT 5
cout << CONSTANT << endl;

	return 0;
}
