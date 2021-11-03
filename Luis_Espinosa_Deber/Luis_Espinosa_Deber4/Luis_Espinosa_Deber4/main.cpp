/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Deber4
Autores:  Espinosa Luis
Fecha de creacion: 01/11/2021
Fecha de modificacion: 01/11/2021
7167 ESTRUCTURA DE DATOS
*/


#include <iostream>
#include "Deber4.h"
#include "Deber4.cpp"
#include "Operacion.h"
#include "Operacion.cpp"


using namespace std;

int main() {

	//creacion reales

	Numero <double> numreal(-145);


	//creacion flotantes

	Numero <float> numfloat(-14.234f);



	Operacion <double> valAbsreal;
	Operacion <float> valAbsfloat;

	cout << "El valor absoluto de " << " " << numreal.getNumero() << " " << "es :" << valAbsreal.valAbs(numreal) << endl;
	cout << "El valor absoluto de " << " " << numfloat.getNumero() << " " << "es :" << valAbsfloat.valAbs(numfloat) << endl;


}