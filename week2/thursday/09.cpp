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
  //  ********* ha lehagytuk a cnt sort csökken megint a csillagok száma, azaz olyan mintha lenne egy alsó három-
  //   ******* szög amelyet alulról építünk: azaz i+1 db szóköz van, és cnt-i+1 db csillag
  //    ***** azaz a gyémánt két háromszögből épül föl
  //     ***
  //      *

void diamond(int cnt){
  // felső háromszög
  // i: [0 .. cnt [ intervallumból választ értékeket
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

  // alsó háromszög, fordítva írjuk ki, azaz i: [cnt .. 0]
  for(int i=cnt; i>=0; i--){ // vedd észre, hogy i>=0, erre azért volt szükség, 
    // szóköz;               // mert az utolsó sorban még egy csillagot ki kellet írni:)
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
  // Create a function that takes a number and prints a diamond like this:
  //
  //      *
  //     ***
  //    *****
  //   *******
  //  *********
  // ***********
  //  *********
  //   *******
  //    *****
  //     ***
  //      *
  //
  // The diamond should have as many lines as the value in the argument

  diamond(6);

  return 0;
}
