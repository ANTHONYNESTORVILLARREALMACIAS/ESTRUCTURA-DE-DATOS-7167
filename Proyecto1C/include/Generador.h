#ifndef GENERADOR_H
#define GENERADOR_H
#include "Nodo.h"
#include<string>


using  namespace std;

class Generador
{
public:
	string crearCorreo(string, string, string);
	string generarNumeroDeCuenta(string, int);
	Generador();
protected:
private:
	string dominio;
	bool existeCorreo(string, Nodo*);

};
#endif // GENERADOR_H
