//============================================================================
// Name        : Hello.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>

using namespace std;

void negativeArray(int array[], int length) {
	for(int i = 0; i < length; i++) {
	  if(array[i] < 0) {
		  break;
	  }
  }
}

int main() {
  int numbers[] = {6, 5, -3, 4, -1, 8, 7};
  int length= sizeof(numbers)/sizeof(int);
  // Write a function that decides if an array includes at least one negative number or not
  negativeArray(numbers, length);
  cout << "the array includes at least one negative number" << endl;
  return 0;
}
