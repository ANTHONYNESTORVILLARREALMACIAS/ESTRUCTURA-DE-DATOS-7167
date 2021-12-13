/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Complejo
Autores:  Espinosa Luis
Fecha de creacion: 05/11/2021
Fecha de modificacion: 05/11/2021
7167 ESTRUCTURA DE DATOS
*/

#include "Complejo.h"
#include <iostream>
using namespace std;
template <class T>
Complejo<T>::Complejo(T real, T img) {
	this->real = real;
	this->img = img;
}
template <class T>
void Complejo<T>::setReal(T real) {
	this->real = real;
}
template <class T>
void Complejo<T>::setImg(T img) {
	this->img = img;
}
template <class T>
T Complejo<T>::getReal() {
	return this->real;
}
template <class T>
T Complejo<T>::getImg() {
	return this->img;
}
template <class T>
Complejo<T>& Complejo<T>::operator +(const Complejo<T>& A) {
	this->img += A.img;
	this->real += A.real;
	return *this;
}
template <class T>
Complejo<T>& Complejo<T>::operator -(const Complejo<T>& A) {
	this->img -= A.img;
	this->real -= A.real;
	return *this;
}
template class Complejo<int>;
template class Complejo<float>;
template class Complejo<double>;


