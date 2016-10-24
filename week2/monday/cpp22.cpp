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
		int ac = 8;
		int time = 120;
		string out = "";

		if( ac%4 == 0 && time < 200){
			cout << "check" << endl;

		}else if( time > 200 ){
			cout << "Time out" << endl;

		}else {
			cout << "Run Forest Run!";


		}
	return 0;
}
