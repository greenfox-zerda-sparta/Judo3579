/*
 * temp05.cpp
 *
 *  Created on: 2016. nov. 23.
 *      Author: Judo
 */
#include <iostream>
#include <string>


template<typename T>
void printBin(const T& t){
    size_t nBytes=sizeof(T);
    char* rawPtr((char*)(&t));
    for(size_t byte=0; byte<nBytes; byte++){
        for(size_t bit=0; bit<CHAR_BIT; bit++){
            std::cout<<(((rawPtr[byte])>>bit)&1);
        }
    }
    std::cout<<std::endl;
};

int main(void){
 /*   for(int i=0; i<50; i++){
        std::cout<<i<<": ";
        printBin(i);
    } */
	int i = 4;
	char a = 'a';
	printBin(i);
	printBin(a);

	std::cout << i << a << std::endl;
}


//Create a function template that takes 2 different typenames, and prints out
  //which one is stored in more bytes from then
