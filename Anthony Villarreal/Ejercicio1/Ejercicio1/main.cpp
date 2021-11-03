#include <iostream>
#include <stdio.h>
#include <conio.h>

#include "datosAbstractos.h"
#include "Operacionsuma.h"

using namespace std;
int main(int argc, char** argv)
{
	float valor1, valor2;
	cout << "ingrese valor 1 -> ";
	cin >> valor1;
	cout << "ingrese valor 2 -> ";
	cin >> valor2;

	datosAbstractos<float> c(valor1, valor2);
	c.setValor1(valor1);
	c.setValor2(valor2);

	OperacionesHeader<float> o;

	cout << "Suma = " << o.suma(c.getValor1(), c.getValor2()) << endl;

	return 0;
}