/*
 * Pirate.h
 *
 *  Created on: 2016. nov. 8.
 *      Author: Judo
 */
#ifndef PIRATE_H_
#define PIRATE_H_
#include <iostream>
#include <string>

using namespace std;

class Pirate {
  private:
	int count;
	string yes;
  public:
	Pirate(int count, string yes);
	int drink_rum(int count, string yes);
	void hows_goin_mate(int count);
};



#endif /* PIRATE_H_ */
