#include <iostream>

using namespace std;

int evenNumbers(int array[], int length) {
  int number = 0;
  for(int i = 0; i < length; i++) {
    if(array[i]%2 == 0) {
      number++;
    }
  }
  return number;
}

int main(){
  int numbers[] = {4, 5, 6, 2, 3, 8, 6, 5};
  // create a function that takes an array and it's length as an agrument
  // and returns a number that states how many even numbers are in the array
  int length = sizeof(numbers)/sizeof(int);
  cout << evenNumbers(numbers, length);
	return 0;
}
