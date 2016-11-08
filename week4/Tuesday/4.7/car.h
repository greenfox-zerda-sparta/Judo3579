/*
 * car.h
 *
 *  Created on: 2016. nov. 8.
 *      Author: Judo
 */

#ifndef CAR_H_
#define CAR_H_
#include <iostream>
#include <string>
using namespace std;

class Car {
  private:
	string type;
	int km;
  public:
	Car(string type, int km);
	int run(unsigned int number);
};



#endif /* CAR_H_ */
