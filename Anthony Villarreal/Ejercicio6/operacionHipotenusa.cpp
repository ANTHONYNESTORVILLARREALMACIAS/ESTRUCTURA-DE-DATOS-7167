#include "operacionHipotenusa.h"
#include <iostream>

using namespace std;
template <typename tipoDato>
tipoDato OperacionHipotenusa <tipoDato>::hipotenusa(tipoDato u1, tipoDato u2) {
	u1 = sqrt(pow(u1,2)+pow(u2,2));
	return u1;
}

template class OperacionHipotenusa <int>;
template class OperacionHipotenusa <double>;
template class OperacionHipotenusa <float>;