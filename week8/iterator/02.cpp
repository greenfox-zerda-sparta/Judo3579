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

// create a function that prints a vector using iterators

void print(vector<int> v, vector<int>::iterator it) {
	for (it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}
}

int main() {
vector<int> v;
for (int i = 0; i < 10; ++i) {
	v.push_back(i);
}

vector<int>::iterator it;
print(v, it);
return 0;
}


