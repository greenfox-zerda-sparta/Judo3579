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

	int e[5] = {1, 2, 3, 4, 5};
		// increment the 3rd element, than print all the elements of the array
	e[2]++;

	for (int i=0; i<6; i++)
		 {
		cout << e[i] << endl;
		 }


	return 0;
}
