/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Deber4
Autores:  Espinosa Luis
Fecha de creacion: 01/11/2021
Fecha de modificacion: 01/11/2021
7167 ESTRUCTURA DE DATOS
*/

#include "Deber4.h"
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
Numero <G>::Numero(G numer)
{
	this->num = numer;

}