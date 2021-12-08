#ifndef INGRESODATOS_H
#define INGRESODATOS_H
#include "Persona.h"
#include "Vehiculos.h"
#include "Cedula.h"

class IngresoDatos
{
public:
	Persona ingresarPersona();
	Vehiculos ingresarVehiculo();
	Cedula ingresarCedula();
	Fecha_de_nacimiento ingresarfecha_de_nacimiento();
};

#endif // INGRESODATOS_H
