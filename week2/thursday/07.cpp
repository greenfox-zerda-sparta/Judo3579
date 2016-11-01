#include <iostream>

using namespace std;


  // * első sorban 1 db háromszög
  // ** minden sorban 1-el több háromszög van
  // *** minden sorban annyi háromszög van ahányadik sor
  // **** így egy for ciklus kell ahány szám van, és minden sorban annyi háromszöget kell kiírni ahányadik sorban vagyunk épp
  // ***** minden sor végén új sor
  // ******

void triangle(int cnt){
  for(int i = 0; i<cnt;i++){
    for(int j = 0; j<i+1; j++){
      cout << "*";
    }
    cout << endl;
  }
}

int main() {
  // create a function that takes a number and prints a triangle like this:
  // *
  // **
  // ***
  // ****
  // *****
  // ******
  //
  // The triangle should have as many lines as the value in the argument

  triangle(6);

  return 0;
}
