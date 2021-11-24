/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: PRUEBA 1
Autores: Anthony Villarreal, Ariel Pozo, Esteban Chablay, Espinoza Luis
Fecha de creacion: 05/11/2021
Fecha de modificacion: 05/11/2021
7167 ESTRUCTURA DE DATOS
*/

#include <iostream>
#include "Complejo.h"
using namespace std;

int main(int argc, char** argv) {
	Complejo<int> A(1,3),B(2,4);
	Complejo<int> C;
	int x,y;
	cout <<" suma de complejos "<<endl;
	C=A+B;
	cout<<C.getReal()<<"  +  "<<C.getImg()<<"  i "<< endl;
	C.setImg(0);
	C.setReal(0);
	cout <<" resta de complejos "<<endl;
	C=A-B;
	cout<<C.getReal()<<"  +  "<<C.getImg()<<"  i "<< endl;
	cin.ignore();
	system("pause");
	return 0;
}