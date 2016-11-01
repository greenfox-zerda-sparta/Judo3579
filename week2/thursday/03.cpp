//============================================================================
// Name        : Hello.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>

using namespace std;

void swap(int *first, int *second) {
	int temp;
	temp = *first;
	*first = *second;
	*second = temp;
}

int main() {
  int first = 12;
  int second = 54;

  // Write a function that takes two int pointers and swaps the values where the pointers point
  swap(&first, &second);

  cout << first << endl << second;
  return 0;
}
