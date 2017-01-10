//============================================================================
// Name        : vizsga3.cpp
// Author      : haha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;


#define str(a) #a



int main() {
	// In Your main function create an array of integers. 5 long.
	// Fill it up with random numbers.
	// For each number treat it as the radius of a circle.
	// Calculate the circumference and the area of the circle with such a radius.
	// Use preprocessor to define the MY_PI constant. Use this in the calculations.

#define PI 3.14


int main() {

  int arr[5];
  for (unsigned int i = 0; i < 5; i++) {
      int random = rand() % 20 + 1;
      arr[i] = random;
      std::cout << " If r = " << arr[i] << "; Circle " << i+1 << " --> Circumference = " << 2 * MY_PI * arr[i] << "; Area = " << MY_PI * pow(arr[i], 2) << std::endl;
    }

    return 0;
}


