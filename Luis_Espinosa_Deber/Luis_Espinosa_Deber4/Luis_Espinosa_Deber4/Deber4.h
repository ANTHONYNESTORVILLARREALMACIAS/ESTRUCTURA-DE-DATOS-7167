/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Deber4
Autores:  Espinosa Luis
Fecha de creacion: 01/11/2021
Fecha de modificacion: 01/11/2021
7167 ESTRUCTURA DE DATOS
*/

#pragma once

#include <iostream>
#include <stdlib.h>

template <typename G>
class Numero {
public:
	void setNumero(G n);
	G getNumero()const;
	Numero<G>(G numer);

private:
	G num;

};