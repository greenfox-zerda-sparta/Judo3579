/*
 * temp08.cpp
 *
 *  Created on: 2016. nov. 23.
 *      Author: Judo
 */
#include <iostream>


template <class T>
T add(T a, T b)
{
  T result;
  result = a + b;
  return result;
}

template <class T>
T subtract(T a, T b)
{
  T result;
  result = a - b;
  return result;
}

template <class T>
T divide(T a, T b)
{
  T result;
  result = a / b;
  return result;
}

template <class T>
T multiply(T a, T b)
{
  T result;
  result = a * b;
  return result;
}

int main(void)
{

  std::cout<<add<int>(10,20)<<std::endl;
  std::cout<<subtract<float>(5.4,2.3)<<std::endl;
  std::cout<<multiply<int>(4,5)<<std::endl;
  std::cout<<divide<int>(9,3)<<std::endl;
  std::cin.get();

  return 0;
}
	//Create a class template for a calculator
        //it should have all the basic methods: add, subtract, multiply, divide
        //use exceptions to handle errors in special cases! (find the special cases!)




