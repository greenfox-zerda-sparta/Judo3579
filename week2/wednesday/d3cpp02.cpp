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
  // print the value of number using the "number_pointer"


  cout << "Value of number is:" << *number_pointer << endl;




  return 0;
}




