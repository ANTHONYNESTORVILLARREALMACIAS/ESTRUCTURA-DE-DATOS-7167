/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Ejercicio Deber Miercoles
Autores: Anthony Villarreal
Fecha de creacion: 03/11/2021
Fecha de modificacion: 03/11/2021
7167 ESTRUCTURA DE DATOS
*/

#include "numeros.h"
#include "operacionHipotenusa.h"

#include <iostream>

using namespace std;
int main(int argc, char** argv)
{
	float valor1, valor2;
	cout << "Ingrese el cateto 1: ";
	cin >> valor1;
	cout << "Ingrese el cateto 2: ";
	cin >> valor2;

	numeros<float> c(valor1, valor2);
	c.setValor1(valor1);
	c.setValor2(valor2);

	OperacionHipotenusa<float> o;

	cout << "La HIPOTENUSA es igual a: " << o.hipotenusa(c.getValor1(), c.getValor2()) << endl;

	return 0;
}