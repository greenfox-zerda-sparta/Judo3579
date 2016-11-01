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

bool isPrime(int number) {

	for(int i = 2; i < number; i++) {
		if(number % i == 0){
			return false;
		}
	}

	return true;
}

int main(){
  int number = 11;
  // create a function that decides if a number is a prime number.
  // It should take a number as an argument and return true if it is prime and
  // false otherwise.

  bool a = isPrime(number);

  if(a == true) {
	  cout << "prim" << endl;
  } else {
	  cout << "not prim" << endl;
  }

	return 0;
}
