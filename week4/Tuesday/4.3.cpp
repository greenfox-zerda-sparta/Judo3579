#include <iostream>
#include <string>


using namespace std;

class Student {
    string name;
    unsigned int age;
    Student(string name, unsigned int age) {
      this->age = age;
      this->name = name;
    }
   void greet(string student_name) {
	  cout << "Hello my name is: " + this->name;
   }

};

int main() {
  // Create a method on the Student class called "greet" that returns a string
  // like: "Hello my name is: <student name>"
  Student new_student("John", 21);
  student.greet();

  return 0;
}
