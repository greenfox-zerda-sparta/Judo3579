//============================================================================
// Name        : Hello.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>

using namespace std;

void takesArray(int array[], int length) {
	int temp;
	for(int i = 0; i < length/2; i++) {
	//	if(i%2==0) {   plusz lépés gyakorlásnak
      temp = array[length-i-1];
      array[length-i-1] = array[i];
      array[i] = temp;
	// }
  }
}

void printArray(int *array, int l){
  for (int i = 0; i < l; i++){
    cout << array[i] << endl;
  }
}

int main() {
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8};

  // Write a function that takes an array and its length than reverses the array
  int length= sizeof(array)/sizeof(int);

    takesArray(array,length);
    printArray(array,length);
  return 0;
}
