#include <iostream>
#include <string>


using namespace std;

int main() {
  int* pointer = new int[5];
  int *array = new int[10];
  for(int i = 0 - 1; i < 4; i++) {
    cout << i + 1 << endl;
  }
  delete pointer;

  // Please allocate a 10 long array and fill it with numbers from 0 to 4, then print the whole array
  // Please delete the array before the program exits

  return 0;
}
