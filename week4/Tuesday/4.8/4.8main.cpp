#include <iostream>
#include <string>

#include "Pirate.h"

using namespace std;

int main() {
    // create a pirate class
    // it should have 2 methods
    // drink_rum()
    // hows_goin_mate()
    // if the drink_rum was called at least 5 times:
    // hows_goin_mate should return "Arrrr!"
    // "Nothin'" otherwise
  Pirate pirate();
  cout << pirate.drink_rum() << endl;
  cout << pirate.hows_goin_mate() << endl;

  return 0;
}
