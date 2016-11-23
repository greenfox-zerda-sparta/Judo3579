/*
 * temp02.cpp
 *
 *  Created on: 2016. nov. 23.
 *      Author: Judo
 */

#include <iostream>
#include <string>

using namespace std;

template<class array>
array printArray(array a[3]) {
return a[0] += a[2];
}

int main() {
	// create a function template that takes 3 long array
	// and add the 1st element of it to the third
 int a[3] = {1, 2, 3};
 printArray(a);
 cout << a << endl;

  return 0;
}


