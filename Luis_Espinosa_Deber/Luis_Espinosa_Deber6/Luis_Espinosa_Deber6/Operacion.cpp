/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Deber6
Autores:  Espinosa Luis
Fecha de creacion: 03/11/2021
Fecha de modificacion: 03/11/2021
7167 ESTRUCTURA DE DATOS
*/

#include "Operacion.h"
#include "Deber6.h"
#include <math.h>
using namespace std;
template <typename G>
G Operacion<G>::anguloVec(Numero<G>& num) {
	G r1 = num.getNumero2() / num.getNumero1();

	G respuesta = atan(r1)*(57.29578);
	return respuesta;

}

template <typename G>
G Operacion<G>::moduloNum(Numero<G>& num)
{
	G respuesta = (sqrt(((num.getNumero1()) * (num.getNumero1())) + ((num.getNumero2()) * (num.getNumero2()))));
	return respuesta;
}


