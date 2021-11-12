/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Deber_Sobrecarga_Operadores
Autores:  Espinosa Luis
Fecha de creacion: 04/11/2021
Fecha de modificacion: 04/11/2021
7167 ESTRUCTURA DE DATOS
*/

#include "persona.h"
#include <iostream>
#include <stdlib.h>


void Persona::setNombre(const string& n) {
	this->nombre = n;
}
string Persona::getNombre() {
	return this->nombre;
}

void Persona::setApellido(const string& a) {
	this->apellido = a;
}
string Persona::getApellido() {
	return this->apellido;
}
void Persona::setCedula(const string& c) {
	this->cedula = c;
}
string Persona::getCedula() {
	return this->cedula;
}
void Persona::setEdad(double e) {
	this->edad = e;
}
double Persona::getEdad() {
	return this->edad;
}
void Persona::setIngresos(float i) {
	this->ingresos = i;
}
float Persona::getIngresos() {
	return this->ingresos;
}

Persona::Persona(){
}

Persona::Persona(const string& nom, const string& ape, const string& ced, double ed, float ing)
{
	this->nombre = nom;
	this->apellido = ape;
	this->cedula = ced;
	this->edad = ed;
	this->ingresos = ing;
}