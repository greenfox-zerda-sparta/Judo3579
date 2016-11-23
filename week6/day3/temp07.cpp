/*
 * temp07.cpp
 *
 *  Created on: 2016. nov. 23.
 *      Author: Judo
 */
#include <iostream>
#include <string>

using namespace std;

template<class T>
class Simple {
	T first, second;
  public:
	Simple(T a, T b);
	T setIt();
	T getIt();
};

template<class T>
T Simple<T>::setIt() {
	first = a;
	second = b;
}

template<class T>
T Simple<T>::getIt() {
	return a;
}
int main() {
	//Create a simple class template which contains 2 item and has both a get and a set method for these!
  return 0;
}



