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
	int z = 13;

	if ( 10 < z && z < 20 ){
		cout << "Sweet!";
	}else if( z <= 10 ){
		cout << "More!";
	}else {
		cout << "Less!" << endl;
	}

	return 0;
}
