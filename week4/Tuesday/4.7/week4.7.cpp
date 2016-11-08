/*
 * week4.7.cpp
 *
 *  Created on: 2016. nov. 8.
 *      Author: Judo
 */
#include <iostream>
#include <string>

#include "Car.h"

using namespace std;

Car::Car(string type, int km) {
	this->type = type;
	this->km = km;
}

int Car::run(unsigned int number) {
	return this->km = this->km + number;
}


