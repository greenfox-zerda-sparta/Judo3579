#include <iostream>
#include <string>


using namespace std;

class Student {
  public:
    string name;
    unsigned int age;
};

int main() {
  // Create a new instace of the Student class and set it's name to "John" and
  // it's age to 21
  Student student_new;
  student_new.name = "John";
  student_new.age = 21;

  cout << student_new.name << " " << student_new.age;


  return 0;
}
