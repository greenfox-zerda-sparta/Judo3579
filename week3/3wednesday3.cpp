#include <iostream>
#include <string>


using namespace std;

/**
 * Please create a program that asks for a count when it starts.
 * It should ask for a number count times, then it shoud print the average of the nubmers.
 * It should delete any dynamically allocated resource before the program exits.
 */

int main() {
  int *pointer = NULL;
  int number;
  int count;
  cout << "Say a number" << endl;
  cin >> count;
  pointer = new int;
    for(int i = 0; i < count; i++) {
    	cout << "Give a number"<< endl;
    	cin >> number;
    }
    cout << count * number/2;
    delete pointer;
  return 0;

}
