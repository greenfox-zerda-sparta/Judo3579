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

int main(int False, bool True) {
		int ab = 123;
		int credits = 100;
		bool is_bonus = False;

		if( credits >= 50 && is_bonus == False){
			cout << ab-2 << endl;

		}else if( credits <= 50 && is_bonus == False ){
			cout << ab-1 << endl;

		}else if( is_bonus == True ){
			cout << ab;


		}
	return 0;
}
