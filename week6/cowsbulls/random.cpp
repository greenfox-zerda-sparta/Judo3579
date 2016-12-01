/*
 * random.cpp
 *
 *  Created on: 2016. dec. 1.
 *      Author: Judo
 */
#include "random.hpp"

using namespace std;

RandomNum::RandomNum() {

}

void RandomNum::getRandom() {
vector<int> v(4);
  for (int i = 0; i < v.size(); ++i) {
      v[i] = rand() % 10;
 }

}

RandomNum::~RandomNum() {

}
