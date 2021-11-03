/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Deber_Fraccion
Autores: Anthony Villarreal, Ariel Pozo, Esteban Chablay, Espinoza Luis
Fecha de creacion: 28/10/2021
Fecha de modificacion: 28/10/2021
7167 ESTRUCTURA DE DATOS
*/
#include "Funcion.h"
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