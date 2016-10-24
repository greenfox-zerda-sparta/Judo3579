//============================================================================
// Name        : Hello.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
	int j1 = 10;
	int j2 = 3;
	j2 = pow(j2,3);

	if(j1 > pow(j2,2) && j1 < pow(j2,3)){
			cout << "j1 is higher than j2 squared and smaller than j2 cubed" << endl;
		}else{
			cout << "j1 is not higher than j2"<< endl;
		}

	return 0;
}
