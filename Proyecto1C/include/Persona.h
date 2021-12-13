#ifndef PERSONA_H
#define PERSONA_H

#include "Cedula.h"
#include "Vehiculos.h"
#include "Fecha_de_nacimiento.h"
#include <iostream>
#include <string>
using namespace std;

class Persona
{
public:
	Persona(string, string, string, string, Vehiculos, Fecha_de_nacimiento, Cedula , string);
	Persona() = default;
	string getNombre1(void);
	void setNombre1(string newNombre1);
	string getNombre2(void);
	void setNombre2(string newNombre2);
	string getApellido1(void);
	void setApellido1(string newApellido1);
	string getApellido2(void);
	void setApellido2(string newApellido2);
	Vehiculos getVehiculo(void);
	void setVehiculo(Vehiculos newVehiculo);
	Fecha_de_nacimiento getFec_naci(void);
	void setFec_naci(Fecha_de_nacimiento newFec_naci);
	Cedula getCedula(void);
	void setCedula(Cedula newCedula);
	string getCorreo();
	void setCorreo(string newCorreo);
	void mostrarPersona();

protected:
private:
	string nombre1;
	string nombre2;
	string apellido1;
	string apellido2;
	Vehiculos vehiculo;
	Fecha_de_nacimiento fec_naci;
	Cedula cedula;
	string correo;

};

#endif // PERSONA_H
