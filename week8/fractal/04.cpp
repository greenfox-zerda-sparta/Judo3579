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

unsigned int powerN(unsigned int base, unsigned int n) {
  if (n == 0) {
    return 1;
  } else {
    return base * powerN(base, n-1);
  }
}

int main() {
  // Given base and n that are both 1 or more, compute recursively (no loops)
  // the value of base to the n power, so powerN(3, 2) is 9 (3 squared).
  unsigned int base = 3;
  unsigned int num = 2;
  cout << powerN(base, num) << endl;
  return 0;
}
