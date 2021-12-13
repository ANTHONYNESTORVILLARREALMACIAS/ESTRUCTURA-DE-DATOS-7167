#include "../include/Generador.h"
#include "../include/Nodo.h"
#include "../include/Persona.h"
#include<iostream>
#include <string.h>
#include <string>

using namespace std;

bool Generador::existeCorreo(string correo, Nodo* persona) {
	Nodo* aux = new Nodo();
	while (aux != NULL)	{
		if (correo == aux->getDato().getCorreo()) {
			return true;
		}
		aux = aux->getSiguiente();
	}
	return false;
}

string Generador::crearCorreo(string apellido, string nombre1, string nombre2) {
	string correo;
	char correoAux[30];
	char n1[2];
	char n2[2];
	char dom[13] = "@espe.edu.ec";
	n1[0]=nombre1[0];
	n2[0]=nombre2[0];
	char apel1[20];
	strcpy(apel1, apellido.c_str());
	strcpy(correoAux, n1);
	strcat(correoAux, n2);
	strcat(correoAux, apel1);
	strcat(correoAux, dom);
	correo = correoAux;
	return correo;
}

string Generador::generarNumeroDeCuenta(string cedula, int tipoDeCuenta) {
	int numero = (tipoDeCuenta == 1) ? 65 : 67;
	string cuenta = to_string(numero);
	for (int i = 9; i >= 0; i--)	{
		cuenta += cedula[i];

	}
	return cuenta;
}

Generador::Generador(){
	this->dominio = "@espe.edu.ec";
}
