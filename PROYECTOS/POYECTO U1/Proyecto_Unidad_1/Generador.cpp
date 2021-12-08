#include "Generador.h"
#include "Nodo.h"
#include "Persona.h"
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
	strcpy_s(apel1, apellido.c_str());
	//cout<<"\n Apellido String: "<<apellido<<endl;
	//cout<<"\n Apellido char: "<<apel1<<endl;
	strcpy_s(correoAux, n1);
	//cout<<"- "<<correoAux<<endl;
	strcat_s(correoAux, n2);
	//cout<<"- "<<correoAux<<endl;
	strcat_s(correoAux, apel1);
	//cout<<"- "<<correoAux<<endl;
	strcat_s(correoAux, dom);
	//cout<<"- "<<correoAux<<endl;
	//cout<<"\nSu correo sera: "<<correoAux<<endl;
	correo = correoAux;
	//cout<<"Correo string: "<<correo<<endl;
	return correo;
}

Generador::Generador(){
	this->dominio = "@espe.edu.ec";
}
