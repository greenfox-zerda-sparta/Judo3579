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



void doublenumber(int& a){
			 a *= 2;

}


int main() {
	  int j = 123;
	  // create a function that doubles it's input
	  // double j with it

	  doublenumber(j);

	  cout << j;



	  return 0;
}




