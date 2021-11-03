#include "operacionDivision.h"
#include <iostream>

using namespace std;
template <typename tipoDato>
tipoDato OperacionDivision <tipoDato>::division(tipoDato u1, tipoDato u2) {
	if (u2 == 0)
	{
		cout << "NO SE PUEDE DIVIDIR !!!!" << endl;
	}
	else
		return u1 / u2;
}

template class OperacionDivision <int>;
template class OperacionDivision <double>;
template class OperacionDivision <float>;