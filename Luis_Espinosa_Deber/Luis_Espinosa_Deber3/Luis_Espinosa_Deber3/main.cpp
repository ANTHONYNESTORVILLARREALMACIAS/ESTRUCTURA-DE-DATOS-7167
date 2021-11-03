/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Deber3
Autores:  Espinosa Luis
Fecha de creacion: 31/10/2021
Fecha de modificacion: 31/10/2021
7167 ESTRUCTURA DE DATOS
*/


#include <iostream>
#include "Deber3.h"
#include "Deber3.cpp"
#include "Porcentaje.h"
#include "Porcentaje.cpp"


using namespace std;

int main() {

	//creacion reales

	Numero <double> numreal(451,75);
	

	//creacion flotantes

	Numero <float> numfloat(3.8f,14.3f);
	
	

	Operacion <double> porcientoreal;
	Operacion <float> porcientofloat;

	cout << "El " << numreal.getPorcentaje() << " % de" <<" " << numreal.getNumero() << " " << "es :" << porcientoreal.Porcentaj(numreal) << endl;
	cout << "El " << numfloat.getPorcentaje() << " % de" <<" " << numfloat.getNumero() <<" " << "es :" << porcientofloat.Porcentaj(numfloat);


}
