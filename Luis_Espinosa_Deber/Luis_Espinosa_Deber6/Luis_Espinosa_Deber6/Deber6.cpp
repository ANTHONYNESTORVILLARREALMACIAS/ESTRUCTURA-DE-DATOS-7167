/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Deber6
Autores:  Espinosa Luis
Fecha de creacion: 03/11/2021
Fecha de modificacion: 03/11/2021
7167 ESTRUCTURA DE DATOS
*/

#include "Deber6.h"
#include <iostream>
#include <stdlib.h>

template <typename G>
void Numero<G>::setNumero1(G n1) {
	this->num1 = n1;
}
template <typename G>
G Numero<G>::getNumero1() const {
	return this->num1;
}

template <typename G>
void Numero<G>::setNumero2(G n2) {
	this->num2 = n2;
}

template <typename G>
G Numero<G>::getNumero2() const {
	return this->num2;
}


template <typename G>
Numero <G>::Numero(G numer1, G numer2)
{
	this->num1 = numer1;
	this->num2 = numer2;
}