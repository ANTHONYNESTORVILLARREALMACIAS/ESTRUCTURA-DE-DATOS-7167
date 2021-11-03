/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Deber5
Autores:  Espinosa Luis
Fecha de creacion: 02/11/2021
Fecha de modificacion: 02/11/2021
7167 ESTRUCTURA DE DATOS
*/

#pragma once

#include <iostream>
#include <stdlib.h>

template <typename G>
class Numero {
public:
	void setNumero1(G n1);
	G getNumero1()const;
	void setNumero2(G n2);
	G getNumero2()const;
	Numero<G>(G numer1, G numer2);

private:
	G num1;
	G num2;
};