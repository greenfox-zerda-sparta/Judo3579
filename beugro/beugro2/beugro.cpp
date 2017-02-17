//============================================================================
// Name        : beugro.cpp
// Author      : haha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int second_biggest_number (int arr[]) {
  int temp = arr[1];
  for (int i=3; i<6; i=i+2) {
    if (arr[i] > temp) {
	  temp = arr[i];
    }
  }
  return temp;
}


int main() {

  int arr[6] = {1, 3, 8, 6, 7, 4};

  cout << second_biggest_number(arr) << endl;
  return 0;
}
