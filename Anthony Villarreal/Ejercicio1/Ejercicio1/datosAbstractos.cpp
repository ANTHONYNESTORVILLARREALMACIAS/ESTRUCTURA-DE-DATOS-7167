#include "datosAbstractos.h"

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

template <typename tipoDato>
datosAbstractos <tipoDato>::datosAbstractos(tipoDato _valor1, tipoDato _valor2) {
	valor1 = _valor1;
	valor2 = _valor2;

}

template <typename tipoDato>
void datosAbstractos <tipoDato>::setValor1(tipoDato _valor1) {
	_valor1 = valor1;

}
template <typename tipoDato>
tipoDato datosAbstractos  <tipoDato>::getValor1() {
	return valor1;

}
template <typename tipoDato>
void datosAbstractos  <tipoDato>::setValor2(tipoDato _valor2) {
	valor2 = _valor2;

}
template <typename tipoDato>
tipoDato datosAbstractos  <tipoDato>::getValor2() {
	return valor2;

}

template class datosAbstractos<int>;
template class datosAbstractos<double>;
template class datosAbstractos<float>;