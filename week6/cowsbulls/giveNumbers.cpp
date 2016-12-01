/*
 * giveNumbers.cpp
 *
 *  Created on: 2016. dec. 1.
 *      Author: Judo
 */

#include "giveNumbers.hpp"

using namespace std;

giveNumbers::giveNumbers() {

}

void giveNumbers::sayNumbers() {
	 vector<int> number(4);
	  int inputs;
		 for (int j = 0; j < number.size(); ++j) {
			 cout << "Give 4 number between 0-9" << endl;
			 cin >> inputs;
			 number.push_back(inputs);
		 } while (guess != 10);
}
