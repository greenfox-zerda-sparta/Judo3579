//============================================================================
// Name        : Hello.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;



int main() {
  int numbers[] = {5, 6, 7, 8, 9};
  int* number_pointer = &numbers[0];
  // The "number_pointer" should point to the third element of the array called "numbers",
  // than please print its value with it. Solve the problem without reusiong the "&" operator
  // for geting the address of the third element.

  cout << number_pointer[2] << endl;
  cout << number_pointer;



  return 0;
}




