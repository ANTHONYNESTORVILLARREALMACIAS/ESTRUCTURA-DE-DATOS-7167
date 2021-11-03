#include "Abstracto.h"
#include <iostream>
#include <conio.h>

using namespace std;

template <class TIPOD>
void mostrarAbs(TIPOD numero) {
	if (numero < 0) {
		numero = numero * -1;
	}
	cout << "El numero abstracto es: " << numero << endl;
}