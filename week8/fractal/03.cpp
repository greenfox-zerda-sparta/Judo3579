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

int sum_of_digits(unsigned int n) {
  if (n == 0) {
    return 0;
  } else {
    return (n % 10) + sum_of_digits(n / 10);
  }
}

int main() {
  // Given a non-negative int n,
  // return the sum of its digits recursively (no loops).
  // Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6),
  // while divide (/) by 10 removes the rightmost digit (126 / 10 is 12).
  unsigned int num = 3245747485;
  cout << sum_of_digits(num) << endl;
  return 0;
}
