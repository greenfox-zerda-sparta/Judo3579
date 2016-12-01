/*
 * equal.cpp
 *
 *  Created on: 2016. dec. 1.
 *      Author: Judo
 */

#include "equal.hpp"

using namespace std;

Equal::Equal() {

}

void Equal::BullsCows() {
 if (v[track] == number[track]) {
	 bulls += 1;
 }
   for (int i = 0; i < guess; ++i) {
	   if(v[track] == number[i] && v[track] != number[track]){
		 cows += 1;
	   }
   }
}

/*int Equal::GameWin(int x) {
  if (x == guess) {
	cout << "You got it right!!!\n";
  }
  return 0;
} */
