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

void sortAscending(int *array, int length);
// Implement this function to sort the array in an ascending order.
  for (i=0; i<length; i++){
	  cout << *array;
  }
void sortDescending(int *array, int length);
// Implement this function to sort the array in a descending order.
  int *array;
  for (i=0; i>length; i--){
	  cout << *array;
  }
void printArray(int *array, int length) {
	cout << "{";
	for(int i=0; i<length; i++){
		cout << array[i];
		if(i<length-1) {
			cout << ", ";
		}
	}
	cout << "}" << endl;
}



int main(int argc, char** argv){
	int example[13] = {34, 56, 26, 84, 29, 3875, 43, 96, 4759, 979, 92, 56, 1987};
	sortAscending(example, 13);
	printArray(example, 13);
	sortDescending(example, 13);
	printArray(example, 13);

	return 0;
}


  return 0;
}




