#include <iostream>
#include <string>

using namespace std;

struct Vector {
  double* array;
  int size;
};

Vector* vector_construct(double input[], int size) {
  Vector* vect0 = new Vector;
  vect0->size = size;
  vect0->array = new double[vect0->size];
    for (int i = 0; i < size; i++) {
      vect0->array[i] = input[i];
  }
  return vect0;
}

double vector_at(Vector& v, unsigned int index) {
  if (v.array[index] > v.size) {
    return 0;
  }
	return v.array[index];
}

void vector_insert(Vector& v, unsigned int index, double value) {
  v.size++;
  unsigned int* newv = new unsigned int[v.size];
    for (int i = 0; i < v.size; i++) {
      newv[i] = v.array[i];
    }
    newv[v.array[0]+index] = value;
    delete[] v.array;
    v.array = newv;
}

unsigned int vector_find(Vector& v, double value) {
  //It should return the index of the given value
  unsigned int index;
	for (int i = 0; i < v.size; i++) {
      if (v.array[i] == value) {
    	index = i;
    }
  }
  return index;
}

void vector_remove(Vector& v, unsigned int index) {

}

int main() {
  double DoubleVector = {1.0, 2.1, 3.4};

  return 0;
}
