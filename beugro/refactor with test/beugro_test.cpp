/*
 * beugro_test.cpp
 *
 *  Created on: 2017. febr. 17.
 *      Author: Judo
 */

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "beugro.h"

TEST_CASE("secondBiggestNumber check the second and biggest number") {
  secondBiggestNumber sb;
  int arr[6] = {1, 3, 8, 6, 7, 4};
  REQUIRE(sb.second_biggest_number(arr) == 6);
}
