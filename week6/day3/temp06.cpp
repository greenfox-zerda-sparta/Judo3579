/*
 * temp06.cpp
 *
 *  Created on: 2016. nov. 23.
 *      Author: Judo
 */
#include <iostream>
#include <string>

using namespace std;

template<class array>
array sumOfElements(array a[], array length) {
  int sum = 0;
    for (int i = 0; i < 7; i++) {
	sum = sum + a[i];
    }
	cout << sum;

  return 0;
}


int main() {
	// Create a function template that takes an array, and its length and return the sum of it elements
	  // Create a template specialization for char types, that it returns the sum of the characters integer position in the alphabet
  int numbers[7] = {4, 5, 6, 7, 8, 9, 10};
  sumOfElements(numbers);
  cout << numbers[7];
  return 0;
}



