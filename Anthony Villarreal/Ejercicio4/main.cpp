/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Ejercicio Deber Lunes
Autores: Anthony Villarreal
Fecha de creacion: 01/11/2021
Fecha de modificacion: 01/11/2021
7167 ESTRUCTURA DE DATOS
*/

#include "numeros.h"
#include "OperacionDivision.h"

#include <iostream>

using namespace std;
int main(int argc, char** argv)
{
	float valor1, valor2;
	cout << "Ingrese el valor 1: ";
	cin >> valor1;
	cout << "Ingrese el valor 2: ";
	cin >> valor2;

	numeros<float> c(valor1, valor2);
	c.setValor1(valor1);
	c.setValor2(valor2);

	OperacionDivision<float> o;

	cout << "La division del valor 1 / valor 2 es igual a : " << o.division(c.getValor1(), c.getValor2()) << endl;

	return 0;
}