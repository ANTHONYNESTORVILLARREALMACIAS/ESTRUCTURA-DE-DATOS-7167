/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Deber6
Autores:  Espinosa Luis
Fecha de creacion: 03/11/2021
Fecha de modificacion: 03/11/2021
7167 ESTRUCTURA DE DATOS
*/


#include <iostream>
#include "Deber6.h"
#include "Deber6.cpp"
#include "Operacion.h"
#include "Operacion.cpp"


using namespace std;

int main() {

	//creacion reales

	Numero <double> numreal(42,12);


	//creacion flotantes

	Numero <float> numfloat(11.11f,71.2f);



	Operacion <double> angulReal;
	Operacion <float> angulFloat;

	cout << "(" << angulReal.moduloNum(numreal) << "," << angulReal.anguloVec(numreal) << " )" << "Es el vector en coordenadas polares" << endl;;
	cout << "(" << angulFloat.moduloNum(numfloat) << "," << angulFloat.anguloVec(numfloat) << " )" << "Es el vector en coordenadas polares" << endl;;


}