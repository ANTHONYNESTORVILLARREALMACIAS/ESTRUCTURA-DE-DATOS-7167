/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Deber5
Autores:  Espinosa Luis
Fecha de creacion: 02/11/2021
Fecha de modificacion: 02/11/2021
7167 ESTRUCTURA DE DATOS
*/

#include "Operacion.h"
#include "Deber5.h"

template <typename G>
G Operacion<G>::compararNum(Numero<G>& num) {
	
	if (num.getNumero1() > num.getNumero2()) {

		return num.getNumero1();
}
	return num.getNumero2();

}