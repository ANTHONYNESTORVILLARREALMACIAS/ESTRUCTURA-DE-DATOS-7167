#include "operacionPotencia.h"
#include <iostream>

using namespace std;
template <typename tipoDato>
tipoDato OperacionPotencia <tipoDato>::potencia(tipoDato u1, tipoDato u2) {
	u1 = pow(u1, u2);
	return u1;
}

template class OperacionPotencia <int>;
template class OperacionPotencia <double>;
template class OperacionPotencia <float>;