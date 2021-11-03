/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Deber3
Autores:  Espinosa Luis
Fecha de creacion: 31/10/2021
Fecha de modificacion: 31/10/2021
7167 ESTRUCTURA DE DATOS
*/

#include "Porcentaje.h"
#include "Deber3.h"

template <typename G>
G Operacion<G>::Porcentaj(Numero<G>& num) {

	G respuesta = ((num.getPorcentaje() * num.getNumero()) / (100));
	return respuesta;

}