/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Deber_Fraccion
Autores: Anthony Villarreal, Ariel Pozo, Esteban Chablay, Espinoza Luis
Fecha de creacion: 28/10/2021
Fecha de modificacion: 28/10/2021
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
private:
	G num;
};