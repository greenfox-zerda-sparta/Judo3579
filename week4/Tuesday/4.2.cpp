#include <iostream>
#include <string>


using namespace std;

class Student {
  public:
    string name;
    unsigned int age;
    Student(string name, unsigned int age) {
      this->age = age;
      this->name = name;
    }
};

int main() {
  // Create a new instace of the Student class and set it's name to "John" and
  // it's age to 21 with it's constructor

  Student student_new("John", 21);

  cout << student_new.name << " " << student_new.age << endl;

  return 0;
}
