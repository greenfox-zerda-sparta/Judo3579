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
  int number = 1234;
  int* number_pointer = &number;
  // update the value of number variable to 42 using the "number_pointer"
  *number_pointer = 42;

  cout << "Value of number variable is" << " " << number << endl;


  return 0;
}



