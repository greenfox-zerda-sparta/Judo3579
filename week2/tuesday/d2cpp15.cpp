#include <iostream>

using namespace std;

int givenNumber(int array[], int length, int n) {
  for(int i = 0; i < length; i++) {
    if(array[i] == n;) {
			 return i;
	}
  }
  return -1;
}

int main() {
  int numbers[] = {7, 5, 8, -1, 2};
	  // Write a function that takes ana array, its length and a number
	  // and it returns the index of the given number in the array.
	  // It should return -1 if did not find it. (linear search)
  int length = sizeof(numbers)/sizeof(int);
  cout << givenNumber(numbers, length, 2);
  return 0;
}
