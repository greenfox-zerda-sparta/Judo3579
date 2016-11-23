/*
 * temp04.cpp
 *
 *  Created on: 2016. nov. 23.
 *      Author: Judo
 */
#include <iostream>
#include <string>

using namespace std;

template<class array>
array sortDescending(array a[], array length) {
  int temp;
	for (int i = 0; i < length; i++) {
	  for(int j=i+1; j<=length; j++) {
	    if(a[i]>a[j]) {
	      temp=a[i];
          a[i]=a[j];
          a[j]=temp;
	    }
	 }
  }
}

int main() {
	// create a function template that takes an array and sort it in a descending order
  int a[6] = { 3, 7, 1, 5, 9, 4};
  int length = sizeof(a) / sizeof(a[0]);
  sortDescending(a, 6);
  for (int i = 0; i < length; i++)
  cout << a[6];

  return 0;
}



