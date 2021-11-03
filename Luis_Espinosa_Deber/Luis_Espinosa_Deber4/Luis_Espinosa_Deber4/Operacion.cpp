/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Deber4
Autores:  Espinosa Luis
Fecha de creacion: 01/11/2021
Fecha de modificacion: 01/11/2021
7167 ESTRUCTURA DE DATOS
*/

#include "Operacion.h"
#include "Deber4.h"

template <typename G>
G Operacion<G>::valAbs(Numero<G>& num) {

	if (num.getNumero() < 0 ) {
		G respuesta = num.getNumero() * (-1);
		return respuesta;
	}
	return num.getNumero();

}