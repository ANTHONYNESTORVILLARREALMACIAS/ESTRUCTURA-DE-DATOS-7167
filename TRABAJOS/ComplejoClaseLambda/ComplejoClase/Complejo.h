/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Complejo
Autores:  Espinosa Luis
Fecha de creacion: 05/11/2021
Fecha de modificacion: 05/11/2021
7167 ESTRUCTURA DE DATOS
*/

#pragma once
#include <iostream>
using namespace std;
template <class T>
class Complejo;
template <typename T>
ostream& operator <<(ostream& o, const Complejo<T>& A);

template <class T>
class Complejo {
public:
	Complejo(T real = 0, T img = 0);
	void setReal(T real);
	void setImg(T img);
	T getReal();
	T getImg();
	Complejo<T>& operator +(const Complejo<T>& A);
	Complejo<T>& operator -(const Complejo<T>& A);
private:
	T real;
	T img;
};
