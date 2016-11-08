
#include <iostream>
#include <string>

using namespace std;

class Student {
  public:
    string name;
    unsigned int age;
};

int main() {
  Student newstudent;
  newstudent.name = "John";
  newstudent.age = 21;

  cout << newstudent.name << " " << newstudent.age << endl;

  // Create a new instace of the Student class and set it's name to "John" and
  // it's age to 21

  return 0;
}




