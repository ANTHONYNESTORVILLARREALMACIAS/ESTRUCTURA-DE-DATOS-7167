#include "datosAbstractos.h"

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

template <typename tipoDato>
datosAbstractos <tipoDato>::datosAbstractos(tipoDato _cantidad1, tipoDato _cantidad2) {
	cantidad1 = _cantidad1;
	cantidad2 = _cantidad2;

}

template <typename tipoDato>
void datosAbstractos <tipoDato>::setCantidad1(tipoDato _cantidad1) {
	_cantidad1 = cantidad1;

}
template <typename tipoDato>
tipoDato datosAbstractos  <tipoDato>::getCantidad1() {
	return cantidad1;

}
template <typename tipoDato>
void datosAbstractos  <tipoDato>::setCantidad2(tipoDato _cantidad2) {
	cantidad2 = _cantidad2;

}
template <typename tipoDato>
tipoDato datosAbstractos  <tipoDato>::getCantidad2() {
	return cantidad2;

}

template class datosAbstractos<int>;
template class datosAbstractos<double>;
template class datosAbstractos<float>;
