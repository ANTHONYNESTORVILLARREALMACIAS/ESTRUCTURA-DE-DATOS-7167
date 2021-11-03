#include "operacionMultiplicacion.h"

template <typename tipoDato>
tipoDato OperacionMultiplicacion <tipoDato>::multiplicar(tipoDato u1, tipoDato u2) {
	return u1 * u2;
}

template class OperacionMultiplicacion <int>;
template class OperacionMultiplicacion <double>;
template class OperacionMultiplicacion <float>;