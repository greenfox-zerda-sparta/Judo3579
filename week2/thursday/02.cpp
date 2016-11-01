//============================================================================
// Name        : Hello.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>

using namespace std;

void fillsArray(int array[], int length) {
	int number = 0 - 1;
	for(int i = 0; i < length; i++) {
		array[i] = number + i + 1;
	}
}

void printArray(int *array, int l){
  for (int i = 0; i < l; i++){
    cout << array[i] << endl;
  }
}

int main() {
  int array[10];

  // write a function that takes an array and a length and it fills the array
  // with numbers from zero till the length
  int length= sizeof(array)/sizeof(int);

    fillsArray(array,length);
    printArray(array,length);
    return 0;
  }
