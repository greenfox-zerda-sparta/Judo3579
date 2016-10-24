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
	int a = 0;

	 	 while(a <= 100) {
	 		 if(a%3 == 0 && a%5 == 0)
	 	 cout << "FizzBuzz" << endl;
	 	}else if(a%3 == 0) {
	 		cout << "Fizz" << endl;
	 	}else if(a%5 == 0) {
	 		cout << "Buzz" << endl;
	 	}
	 	a++;
}
	return 0;
}
