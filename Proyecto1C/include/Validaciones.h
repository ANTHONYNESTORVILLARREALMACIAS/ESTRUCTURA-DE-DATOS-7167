#ifndef VALIDACIONES_H
#define VALIDACIONES_H
#include <iostream>
#include <string.h>

class Validaciones {
public:
	char* ingreson1(const char*);
	char* ingreson2(const char*);
	char* ingresoap1(const char*);
	char* ingresoap2(const char*);
	char* ingresocedula(const char*);
	char* ingresoplaca(const char*);
	char* ingresocolorveh(const char*);
	char* ingresomarca(const char*);
	char* ingresokilometraje(const char*);
	char* ingresodia(const char*);
	char* ingresomes(const char*);
	char* ingresoanio(const char*);
	void separar_cifras(long int a, int A[]);
	int validar(long int a, int A[]);
};

#endif // VALIDACIONES_H
