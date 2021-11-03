/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Deber_Fraccion
Autor: Espinosa Luis
Fecha de creacion: 29/10/2021
Fecha de modificacion: 29/10/2021
7167 ESTRUCTURA DE DATOS
*/

#include <iostream>
#include <stdlib.h>
#include "Funcion.cpp"
#include "Funcion.h"


using namespace std;

int main() {
	Numero <int> entero1 ;
	Numero <int> entero2 ;
	Numero<float> flotante1;
	Numero<float> flotante2;
	Numero<double> real1;
	Numero<double> real2;

	//Enteros
	entero1.setNumero(2);
	entero2.setNumero(6);
	
	//Flotantes
	flotante1.setNumero(9.1f);
	flotante2.setNumero(6.2f);

	//Reales
	real1.setNumero(14.2866);
	real2.setNumero(25.1562);



	cout << "La Suma de flotantes es: " << flotante1.getNumero()+ flotante2.getNumero() << endl;
	cout << "La Resta de enteros es: " << entero1.getNumero() - entero2.getNumero() << endl;
	cout << "La Multiplicacion de flotantes es: " << flotante1.getNumero() * flotante2.getNumero() << endl;
	cout << "La Division de reales es: " << real1.getNumero() / real2.getNumero() << endl;

	
	return 0;
}