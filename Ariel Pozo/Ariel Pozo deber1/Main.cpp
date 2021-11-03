#include <iostream>
#include <stdlib.h>
#include <string>
#include "Numero.h"
#include "Numero.cpp"

using namespace std;


int main() {
	Numero<char> caracter;
	Numero<> string;
	Numero<double> real;
	caracter.setNum('a');
	string.setNum('Ecuador');
	

	std::cout << "\n Dato de tipo caracter " << caracter.getNum();
	std::cout << "\n Datom de tipo string " << string.getNum()<< std::endl;
}