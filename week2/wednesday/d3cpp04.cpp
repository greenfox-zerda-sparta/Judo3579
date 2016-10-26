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
  int* number_pointer;
  // The "number_pointer" should point to the first element of the array called "numbers",
  // than please print its value with it.
  int *number_pointer = numbers;

  cout << "The first element is" << " " << *number_pointer[0];



  return 0;
}




