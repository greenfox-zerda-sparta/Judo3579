/*
 * 4.8.cpp
 *
 *  Created on: 2016. nov. 8.
 *      Author: Judo
 */
#include <iostream>
#include <string>

#include "Pirate.h"
using namespace std;

Pirate::Pirate(int count, string yes) {
  this->count = count;
  this->yes = yes;
}

int Pirate::drink_rum(int count, string yes) {
  this->count = count;
  cout << "One more? Say yes" << endl;
  cin >> count;
  for (count = 0; count < 5; count++) {
    if ("yes") {
    	count++;
    } else {
    	return count;
    }
  }
}

void Pirate::hows_goin_mate(int count) {
  this->count = count;
  if (count == 5) {
    cout << "Arrrrrr!" << endl;
  } else {
	  cout << "Nothin'" << endl;
  }
}




