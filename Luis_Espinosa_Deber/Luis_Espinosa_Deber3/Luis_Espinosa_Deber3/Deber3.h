
/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Deber3
Autores:  Espinosa Luis
Fecha de creacion: 31/10/2021
Fecha de modificacion: 31/10/2021
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
	void setPorcentaje(G z);
	G getPorcentaje()const;
	Numero<G>(G numer, G porcent);

private:
	G num;
	G porc;
};