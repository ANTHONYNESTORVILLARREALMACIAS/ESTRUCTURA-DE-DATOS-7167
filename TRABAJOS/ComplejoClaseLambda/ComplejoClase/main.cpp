/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Complejo
Autores:  Espinosa Luis
Fecha de creacion: 06/11/2021
Fecha de modificacion: 13/12/2021
7167 ESTRUCTURA DE DATOS
*/

#include <iostream>
#include "Complejo.h"
using namespace std;

int main(int argc, char** argv) {
	Complejo<int> A, B;

	Complejo<int> C;
	int real1, imagi1, real2, imagi2;

	auto sumaComp = [&](Complejo<int> C) {
		cout << "*** suma de complejos ***" << endl;
		cout << "Ingrese el numero Real 1: ";
		cin >> real1;
		A.setReal(real1);

		cout << "Ingrese el numero Imaginario 1: ";
		cin >> imagi1;
		A.setImg(imagi1);

		cout << "Ingrese el numero Real 2: ";
		cin >> real2;
		B.setReal(real2);

		cout << "Ingrese el numero Imaginario 2: ";
		cin >> imagi2;
		B.setImg(imagi2);

		C = A + B;
		cout << C.getReal() << "  +  " << C.getImg() << "  i " << endl;
		C.setImg(0);
		C.setReal(0);
	};

	auto restaComp = [&](Complejo<int> C) {
		cout << " resta de complejos " << endl;
		cout << "Ingrese el numero Real 1: ";
		cin >> real1;
		A.setReal(real1);

		cout << "Ingrese el numero Imaginario 1: ";
		cin >> imagi1;
		A.setImg(imagi1);

		cout << "Ingrese el numero Real 2: ";
		cin >> real2;
		B.setReal(real2);

		cout << "Ingrese el numero Imaginario 2: ";
		cin >> imagi2;
		B.setImg(imagi2);
		C = A - B;
		cout << C.getReal() << "  +  " << C.getImg() << "  i " << endl;
		cin.ignore();
	};

	sumaComp(C);
	restaComp(C);

	system("pause");
	return 0;
}