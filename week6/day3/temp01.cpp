/*
 * temp01.cpp
 *
 *  Created on: 2016. nov. 23.
 *      Author: Judo
 */

#include <iostream>
#include <string>

using namespace std;

template<class array>
array printFirstElement(array a[5]) {
  return a[0];
}

int main() {
	// create a function template the takes in a fix long array and prints the 1st element of it
  int b[5] = { 3, 7, 1, 5, 9};
  printFirstElement(b);
  cout << b << endl;
  return 0;
}


