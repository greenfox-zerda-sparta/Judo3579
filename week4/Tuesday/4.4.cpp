#include <iostream>
#include <string>


using namespace std;

class Student {
  private:
    string name;
    unsigned int age;
  public:
    Student(string name, unsigned int age) {
      this->age = age;
      this->name = name;
    }

    string greet() {
      return "Hello my name is: " + this->name;
    }

    string change_nameproperty() {
      return this->name + "l";
    }
};

int main() {
  // Create a method on student that takes a string as an argument and
  // changes it's name property
  Student new_student("John", 21);

  cout<< student.change_nameproperty();
  return 0;
}
