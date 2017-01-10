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

unsigned int count_bunny_ears(unsigned int bunny) {
  if (bunny == 0) {
    return 0;
  } else {
    return 2 + count_bunny_ears(bunny - 1);
  }
}

int main() {
  // We have a number of bunnies and each bunny has two big floppy ears.
  // We want to compute the total number of ears across all the bunnies
  // recursively (without loops or multiplication).
  unsigned int nb_of_bunnies = 32;
  cout << count_bunny_ears(nb_of_bunnies) << endl;
  return 0;
}
