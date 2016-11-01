#include <iostream>

using namespace std;

void takeArray(int array[], int length) {
	for(int i = 0; i < length; i++) {
		array[i] *= array[i];
	}
}

void printArray(int *array, int l){
  for (int i = 0; i < l; i++){
    cout << array[i] << endl;
  }
}

int main() {
  // Write a function that takes an array and squares all the elements in the array
  int array[] = {1, 2, 3, 4, 5, 6, 7};
  int length= sizeof(array)/sizeof(int);

  takeArray(array,length);
  printArray(array,length);
  return 0;
}

/*int takeArray(int array[], int length) {
int sum = 0;
for(int i = 0; i < length; i++) {
  sum += array[i];
}
return sum;
}
//array elemeinek összeadása */
