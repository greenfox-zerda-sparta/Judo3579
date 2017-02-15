/*
 * Second.hpp
 *
 *  Created on: 2017. febr. 15.
 *      Author: Judo
 */

#ifndef SECOND_HPP_
#define SECOND_HPP_


#include <iostream>
#include <vector>

class Second {
private:
  std::vector<int> numbers;
public:
  Second();
  int sumNumbers(std::vector<int>& vec);
};



#endif /* SECOND_HPP_ */
