//============================================================================
// Name        : Hello.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>

using namespace std;

int followEvenNumber(int *array, int length) {
	int number = 0;
	for(int i = 0; i < length - 1; i++) {
	  if(array[i]%2 == 0 && array[i+1]%2 == 0) {
		 number++;
	  }
  }
	return number;
}

int main() {
 int numbers[] = {5, 2, 6, 3, 4, 8, 5, 2, 2, 2};
 int length= sizeof(numbers)/sizeof(int);
  // Write a function that counts how many times is an even number is folowed by
  // another even number in an array
  cout << followEvenNumber(numbers, length);
  return 0;
}
