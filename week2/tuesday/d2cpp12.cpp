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



void sum(int a, int b){
	int total;
		total=a+b;


}


int main() {
	int numbers[7] = {4, 5, 6, 7, 8, 9, 10};
	  // write your own sum function
	  // it should take an array and it's length

	int sum = 0;
	    for (int i = 0; i < 7; i++)
	        sum = sum + numbers[i];
	    cout << sum;

	  return 0;
}




