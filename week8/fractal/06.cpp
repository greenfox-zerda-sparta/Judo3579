//============================================================================
// Name        : vizsga3.cpp
// Author      : haha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <string>

using namespace std;

unsigned int num_ear_of_bunnies(unsigned int bunny) {
  if (bunny == 0) {
    return 0;
  } else {
    if (bunny % 2 == 1) {
      return 2 + num_ear_of_bunnies(bunny - 1);
    } else {
      return 3 + num_ear_of_bunnies(bunny-1);
    }
  }
}

int main() {
  // We have bunnies standing in a line, numbered 1, 2, ... The odd bunnies
  // (1, 3, ..) have the normal 2 ears. The even bunnies (2, 4, ..) we'll say
  // have 3 ears, because they each have a raised foot. Recursively return the
  // number of "ears" in the bunny line 1, 2, ... n (without loops or
  // multiplication).
  unsigned int bunny = 12;
  cout << num_ear_of_bunnies(bunny);
  return 0;
}
