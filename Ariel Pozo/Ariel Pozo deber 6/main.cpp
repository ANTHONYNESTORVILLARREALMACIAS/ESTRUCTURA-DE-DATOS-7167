#include <iostream>
#include <stdio.h>
#include <conio.h>

#include "datosAbstractos.h"
#include "operacionPromedio.h"

using namespace std;
int main(int argc, char** argv)
{
	float cantidad1, cantidad2;
	cout << "Ingrese la primera cantidad-> ";
	cin >> cantidad1;
	cout << "Ingrese la segunda cantidad-> ";
	cin >> cantidad2;

	datosAbstractos<float> c(cantidad1, cantidad2);
	c.setCantidad1(cantidad1);
	c.setCantidad2(cantidad2);

	OperacionesHeader<float> o;

	cout << "El Promedio entre sus cantidades es= " << o.promedio(c.getCantidad1(), c.getCantidad2()) << endl;

	return 0;
}