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

int main() {

	int sum = 0;
	int h[] = {3, 4, 5, 6, 7};
		// print the sum of all numbers in h

	int length = sizeof(h)/sizeof(int);
	  for(int i=0; i<length; i++)
	  {
	  		sum += h[i];


	  	cout << sum << endl;
	  }
	return 0;
}
