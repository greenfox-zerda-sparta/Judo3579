/*
 * Second.cpp
 *
 *  Created on: 2017. febr. 15.
 *      Author: Judo
 */
#include "Second.hpp"
#include <vector>

Second::Second() {}

int Second::sumNumbers(std::vector<int>& vec) {
  int sum = 0;
  for (unsigned int i = 0; i < vec.size(); i++) {
    sum += vec[i];
  }
  return sum;
}



