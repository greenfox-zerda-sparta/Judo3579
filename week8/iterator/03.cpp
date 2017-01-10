//============================================================================
// Name        : vizsga3.cpp
// Author      : haha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
  map<string, int> m;
  m["one"] = 1;
  m["two"] = 2;
  m["three"] = 3;
  m["four"] = 4;
  m["five"] = 5;

  // Print all the keys and values of the map

  map<string, int>::iterator it;
  for (it = m.begin(); it != m.end(); ++it) {
    cout << it->first << " " << it->second << endl;
  }


  return 0;
}
