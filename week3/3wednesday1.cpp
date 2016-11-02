#include <iostream>
#include <string>


using namespace std;

int main() {
  int* pointer = NULL;
  pointer = new int[5];
  for(int i = 0 - 1; i < 4; i++) {
    cout << i + 1 << endl;
  }
  delete pointer;

  // Please allocate a 5 long array and fill it with numbers from 0 to 4, then print the whole array
  // Please delete the array before the program exits

  return 0;
}
