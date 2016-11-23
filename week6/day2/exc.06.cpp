/*
 * exc.06.cpp
 *
 *  Created on: 2016. nov. 22.
 *      Author: Judo
 */
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL)); // This initializes the random generator.
	int rnd = 0;
	for (int i=0; i<20; i++) {
		rnd = rand() % 5; // generate a random number in the range [0, 4]
		try {
			switch (rnd) {
				case 0:
					throw 3.2f;
					break;
				case 1:
					throw double(43.56);
					break;
				case 3:
					throw "Abrakadabra";
					break;
				case 4:
					throw false;
					break;
				default:
					throw 12;
					break;
			}
		}
// Write catch blocks for each possibly thrown exception.
// In each catch block write out what the exception's type was. And what the exceptions value was.
	}
  catch (float case0) {
	  cout << "case 0: " << case0 << endl;
  }
  catch (float case1) {
	  cout << "case 1: " << case1 << endl;
  }
  catch (string case3) {
	  cout << "case 3: " << case3 << endl;
  }
  catch (bool case4) {
	  cout << "case 4: " << case4 << endl;
  }
  catch (int default) {
	  cout << "default" << default << endl;
  }
	return 0;
}



