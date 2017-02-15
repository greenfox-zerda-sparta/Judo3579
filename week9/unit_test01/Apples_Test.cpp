/*
 * Apples_Test.cpp
 *
 *  Created on: 2017. febr. 15.
 *      Author: Judo
 */

#define CATCH_CONFIG_MAIN
#include "Catch.hpp"
#include "Apples.hpp"

TEST_CASE("Apples getApple") {
  Apples apples;
  REQUIRE(apples.getApple() == "apple");
}


