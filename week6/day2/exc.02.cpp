/*
 * exc.02.cpp
 *
 *  Created on: 2016. nov. 22.
 *      Author: Judo
 */

#include <iostream>
using namespace std;

// Write the body of the function below.
// It should throw an exception when b is zero.
// Check the result.


float division(int a, int b) throw (int) {
  float result;
  if (b == 0) {
    throw 0;
	} else {
	  result = a/b;
	}
  return result;
}

int main() {
	try {
		cout << "Divison result: " << division(1, 2) << endl;
		cout << "Division result: " << division(2, 0) << endl;

	}
	catch (int excp) {
		cout << "Exception: " << excp << endl;
	}
	return 0;
}


