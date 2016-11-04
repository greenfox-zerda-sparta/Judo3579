#include <iostream>
#include <string>

using namespace std;

struct Stack {  // új típus
  double* data;
  int size;
};

Stack* stack_construct(double input[], int size) {
  Stack* stack0 = new Stack;  // pointerrel új stack
  stack0->size = size;  //
  stack0->data = new double[stack0->size];  //data-t a double értékekkel töltjük fel, data arra a tömbre mutat
  for (int i = 0; i < size; i++) {
    stack0->data[i] = input[i];
  }
  return stack0;
}

void stack_push(Stack& stack, double value) {
 // Stack* stack1 = new Stack;
  stack.size++;
  double* newstack = new double[stack.size];  //létrehozok egy új stackot, amit megnövelek egy értékkel
    for (int i = 0; i < stack.size; i++) {     // feltöltöm a newstackot
      newstack[i] = stack.data[i];             // így csak az első 3 elemet töltöm fel
     }
  newstack[stack.size-1] = value;
  delete[] stack.data;
  stack.data = newstack;
}

double stack_pop(Stack& stack) {
  double data = stack.data[stack.size-1];       //létrehozunk egy stacket
  stack.size--;                                 // amit csökkentünk 1-gyel
  double* popstack = new double[stack.size];  // ezt feltöltjük
    for (int i = 0; i < stack.size; i++) {
      popstack[i] = stack.data[i];
    }

    delete[] stack.data;
    stack.data = popstack;
    return data;
}

int main() {
	double array[3] = {1.0,2.2,3.2};
	Stack* stack0 = stack_construct(array,3);

	cout << stack0->data[1] << endl;

  return 0;
}
