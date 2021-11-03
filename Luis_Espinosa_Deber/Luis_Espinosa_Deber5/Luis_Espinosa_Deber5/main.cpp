/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Deber5
Autores:  Espinosa Luis
Fecha de creacion: 02/11/2021
Fecha de modificacion: 02/11/2021
7167 ESTRUCTURA DE DATOS
*/


#include <iostream>
#include "Deber5.h"
#include "Deber5.cpp"
#include "Operacion.h"
#include "Operacion.cpp"


using namespace std;

int main() {

	//creacion reales

	Numero <double> numreal(-122,3);


	//creacion flotantes

	Numero <float> numfloat(14.11f,14.12f);



	Operacion <double> compValReal;
	Operacion <float> compValFloat;

	cout << compValReal.compararNum(numreal) << " " << "Es en numero mayor " << endl;;
	cout << compValFloat.compararNum(numfloat) << " " << "Es en numero mayor ";;


}