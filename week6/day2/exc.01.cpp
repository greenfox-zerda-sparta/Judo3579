/*
 * exc.01.cpp
 *
 *  Created on: 2016. nov. 22.
 *      Author: Judo
 */

#include <iostream>
using namespace std;

// Write a try - catch block.
// Throw an integer in the try block
// Catch it in the catch block and write it out.



int main() {

  try {
	  throw 10;
  } catch(int x) {
	  cout << "write it out " << x << endl;
  }

	return 0;
}


