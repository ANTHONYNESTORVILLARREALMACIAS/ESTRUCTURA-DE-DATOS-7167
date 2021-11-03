#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;
#include "operacionResta.h"


template <typename tipoDato>
tipoDato OperacionesHeader<tipoDato>::resta(tipoDato d1, tipoDato d2) {
	return d1 - d2;
};


template class OperacionesHeader<int>;
template class OperacionesHeader<double>;
template class OperacionesHeader<float>;
