#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;
#include "operacionProducto.h"


template <typename tipoDato>
tipoDato OperacionesHeader<tipoDato>::multiplicacion(tipoDato d1, tipoDato d2) {
	return d1 * d2;
};


template class OperacionesHeader<int>;
template class OperacionesHeader<double>;
template class OperacionesHeader<float>;
