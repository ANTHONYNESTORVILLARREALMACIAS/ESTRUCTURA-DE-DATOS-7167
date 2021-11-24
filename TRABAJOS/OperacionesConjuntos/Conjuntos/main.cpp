#include <iostream>
#include <conio.h>
#include "Conjunto.cpp"

int main()
{
	Conjunto<float> conjuntoR;
	int total = 0, contador = 0, num = 0;
	std::cout << "Elementos a ingresar al conjunto A: " << std::endl;
	std::cin >> total;
	do {
		std::cout << "Ingrese los elementos del conjunto A " << contador + 1 << std::endl;
		std::cin >> num;
		conjuntoR.set_conjuntoA(num);
		contador++;
	} while (total != contador);

	total = 0, contador = 0;
	std::cout << "Elementos a ingresar al conjunto B: " << std::endl;
	std::cin >> total;
	do {
		std::cout << "Ingrese los elementos del conjunto B " << contador + 1 << std::endl;
		std::cin >> num;
		conjuntoR.set_conjuntoB(num);
		contador++;
	} while (total != contador);

	conjuntoR.unionC();
	conjuntoR.interseccionC();
	std::cout << conjuntoR;
	return 0;
}


