//============================================================================
// Name        : beugro.cpp
// Author      : haha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;


int main() {

  int arr[6] = {1, 3, 8, 6, 7, 4};
  int temp = 0;

  for (int i=0; i<6; i++) {
    if (arr[i] % 2 && arr[i] > temp) {
   	temp = arr[i-1];
    }
  }

  cout << "The biggest number is: " << temp << endl;
  return 0;
}
