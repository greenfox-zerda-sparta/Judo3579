/*
 * beugro.cpp
 *
 *  Created on: 2017. febr. 17.
 *      Author: Judo
 */

#include "beugro.h"

int secondBiggestNumber::second_biggest_number(int arr[]){
  int temp = arr[1];
    for (int i=3; i<6; i=i+2) {
      if (arr[i] > temp) {
	    temp = arr[i];
	  }
	}
  return temp;
}
