#include "Operacion.h"

template <typename T>
 T Operacion<T>::moduloNum(Numero<T>& num)
{
	T respuesta = (sqrt(((num.getNum1())*(num.getNum1()))+((num.getNum2())*(num.getNum2()))));
	return respuesta;
}

