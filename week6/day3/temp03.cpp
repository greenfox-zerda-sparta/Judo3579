/*
 * temp03.cpp
 *
 *  Created on: 2016. nov. 23.
 *      Author: Judo
 */

#include <iostream>
#include <string>

using namespace std;

template<class array>
array printAllElements(array a[], array length) {
	for (int i = 0; i < length; i++)
	cout << a[i];
  return 0;
}

int main() {
	// create a function template which takes in an array, and the size of it
	// print all the elements of the array
  int a[5] = {1, 2, 3, 4, 5};
  printAllElements(a, 5);
  cout << a;

  return 0;
}


