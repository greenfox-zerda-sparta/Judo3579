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

	char g1 = 'a';
	  double g2 = 12.345;
	  // Tell if g1 is stored in more bytes than g2
	  int length = sizeof(g1)/sizeof(int);
	  int length = sizeof(g2)/sizeof(int);

	  if(sizeof(g1) > sizeof(g2))

		  cout << "g1 is stored in more bytes than g2";
	  else{
		  cout << "g1 is not stored in more bytes than g2";
	  }
	


	return 0;
}
