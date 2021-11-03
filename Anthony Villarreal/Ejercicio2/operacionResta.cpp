#include "operacionResta.h"

template <typename tipoDato>
tipoDato OperacionResta <tipoDato>::resta(tipoDato u1, tipoDato u2) {
	return u1 - u2;
}

template class OperacionResta <int>;
template class OperacionResta <double>;
template class OperacionResta <float>;