//============================================================================
// Name        : vizsga3.cpp
// Author      : haha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v;
  for (int i = 0; i < 5; ++i) {
    v.push_back(i);
  }

  // Print the first 5 elements of the vector using iterators

  vector<int>::iterator it;
  for(it = v.begin(); it != v.end(); ++it) {
    cout << *it << endl;
  }
  return 0;
}


