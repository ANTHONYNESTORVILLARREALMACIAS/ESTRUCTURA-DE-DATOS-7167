/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Deber3
Autores:  Espinosa Luis
Fecha de creacion: 31/10/2021
Fecha de modificacion: 31/10/2021
7167 ESTRUCTURA DE DATOS
*/

#include "Deber3.h"
#include <iostream>
#include <stdlib.h>

template <typename G>
void Numero<G>::setNumero(G n) {
	this->num = n;
}
template <typename G>
G Numero<G>::getNumero() const {
	return this->num;
}

template <typename G>
void Numero<G>::setPorcentaje(G z) {
	this->porc = z;
}

template <typename G>
G Numero<G>::getPorcentaje() const {
	return this->porc;
}


template <typename G>
Numero <G>::Numero(G numer, G porcent)
{
	this->num = numer;
	this->porc = porcent;
}