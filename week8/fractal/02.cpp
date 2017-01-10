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

int add_numbers(int n) {
  if (n == 1) {
    return 1;
  } else {
    return n + add_numbers(n-1);
  }
}

int main() {
  // write a recursive function
  // that takes one parameter: n
  // and adds numbers from 1 to n
  int num = 6;
  cout << add_numbers(num) << endl;
  return 0;
}
