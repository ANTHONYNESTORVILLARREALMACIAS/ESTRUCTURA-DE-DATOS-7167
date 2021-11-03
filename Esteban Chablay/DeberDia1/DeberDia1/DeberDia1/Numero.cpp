#include "Numero.h"
#include <iostream>
#include <conio.h>

template <class TIPOD>
void mostrarAbs(TIPOD n) {
	if (n < 0) {
		n = n * -1;
	}

	cout << "El valor absoluto del numero es: " << n;

}