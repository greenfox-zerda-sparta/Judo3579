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
  for (int i=2; i<6; i=i+2) {
    if (arr[i] > temp) {
	  temp = arr[i-1];
    }
  }
  return temp;
}


int main() {

  int arr[6] = {1, 3, 8, 6, 7, 4};
  int x = second_biggest_number(arr);

  cout << "The biggest number is: " << x << endl;
  return 0;
}
