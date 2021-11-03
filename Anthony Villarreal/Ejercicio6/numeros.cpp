#include "numeros.h"

template <typename tipoDato>
numeros <tipoDato>::numeros(tipoDato valor01, tipoDato valor02) {
	valor1 = valor01;
	valor2 = valor02;
}

template <typename tipoDato>
void numeros <tipoDato>::setValor1(tipoDato valor01) {
	valor01 = valor1;
}

template <typename tipoDato>
tipoDato numeros <tipoDato>::getValor1() {
	return valor1;
}

template <typename tipoDato>
void numeros <tipoDato>::setValor2(tipoDato valor02) {
	valor02 = valor2;
}

template <typename tipoDato>
tipoDato numeros <tipoDato>::getValor2() {
	return valor2;
}

template class numeros<int>;
template class numeros<double>;
template class numeros<float>;