//============================================================================
// Name        : vizsga3.cpp
// Author      : haha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#ifdef ENABLE_LOG
#define CONSTANT 2
#else
#define CONSTANT 5
#endif


int main() {
	// Create a constant using preprocessor directives.
	// Make it so, that depending on the existence of a defined variable
	// it's value is different.
	// Write a main function that writes it to the console.
	// Experiment in Your IDE compiling it with the directive defined or not.
	// (This is what we used -D __DEBUG for example. You can try this and see how it works
	// when You compile a Debug version and a Release version.)

cout << CONSTANT << endl;

	return 0;
}
