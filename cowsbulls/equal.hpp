/*
 * equal.hpp
 *
 *  Created on: 2016. dec. 1.
 *      Author: Judo
 */

#ifndef EQUAL_HPP_
#define EQUAL_HPP_

#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

#include "random.hpp"
#include "giveNumbers.hpp"


using namespace std;

class Equal {
public:
	Equal();
	vector<int> v;
	vector<int> number;
	int cows = 0;
	int bulls = 0;
	int guess = 4;
	int track = 0;
//	~Equal();
	void BullsCows();
	int GameWin(int x);
	void GameOver();
};

#endif /* EQUAL_HPP_ */
