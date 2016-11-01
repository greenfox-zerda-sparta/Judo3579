#include <iostream>

using namespace std;

  // cnt=6 esetében
  //0123456789... indexek
  //      * az első sorban, 6 db szóköz van és 1 db csillag
  //     *** a második sorban 5 db szóköz van és 3 db csillag 
  //    ***** a harmadik sorban 4 db szóköz van és 5 db csillag
  //   *******
  //  ********* i. sorban, cnt-i+1 db szóköz van és i*2-1 db csillag
  // *********** a hatodik sorban 1 db szóköz van és 11db csillag

void triangle(int cnt){
  for(int i=0; i<cnt; i++){
    // szóköz;
    for(int j=0; j<cnt-i+1; j++){
      cout << " ";
    }
    for(int j=0; j<i*2+1; j++){
      cout << "*";
    }
    cout << endl;
  }
}

int main() {
  // Create a function that takes a number and prints a triangle like this:
  //
  //      *
  //     ***
  //    *****
  //   *******
  //  *********
  // ***********
  //
  // The triangle should have as many lines as the value in the argument

  triangle(6);

  return 0;
}
