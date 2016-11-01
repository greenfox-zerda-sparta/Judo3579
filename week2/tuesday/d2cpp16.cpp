#include <iostream>

using namespace std;

void printRow(int array[3][3], int length) {
  for(int i = 0; i < length; i++) {
    for(int j = 0; j< length; j++) {
      cout << array[i][j];
	}
    cout << endl;
  }
}

void printColumn(int array[3][3], int length) {
  for(int i = 0; i < length; i++) {
    for(int j = 0; j< length; j++) {
      cout << array[j][i];
	}
    cout << endl;
  }
}

void printOneLine(int array[3][3], int length) {
  for(int i = 0; i < length; i++) {
    for(int j = 0; j< length; j++) {
      cout << array[i][j] << '|';
	}
  }
}

void allInOneColumn(int array[3][3], int length) {
  for(int i = 0; i < length; i++) {
    for(int j = 0; j< length; j++) {
      cout << array[i][j];
      cout << endl;
	}
  }
}

int main(){
	int m[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
	//This is an array of arrays. Print it out as a 3x3 matrix. Using each inner array as
	//a.) a row
	//b.) a column
	//c.) all in one line separated by the character '|'
	//d.) all in one column

	return 0;
}
