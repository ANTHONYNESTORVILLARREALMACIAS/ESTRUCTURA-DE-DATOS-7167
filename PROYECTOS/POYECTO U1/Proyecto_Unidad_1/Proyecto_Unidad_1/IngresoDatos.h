#ifndef INGRESODATOS_H
#define INGRESODATOS_H
#include "Persona.h"
#include "Vehiculos.h"
#include "Cedula.h"

/**
* @file IngresoDatos.h
* @version 1.9.2
* @date 08/12/2021
* @author Anthony Villarreal, Ariel Pozo, Esteban Chablay, Espinoza Luis
* @title Proyecto_Unidad_1
*/

/*
* @brief IngresoDatos clase dedicada al ingreso de datos
*/
class IngresoDatos
{
public:
	/*
	* @brief ingresarPersona ingresa datos de la Persona, ingresarVehiculo, ingresarCedula, ingresarfecha_de_nacimiento
	* @return p1
	*/
	Persona ingresarPersona();
	/*
	* @brief ingresarVehiculo ingresa datos al vehiculo
	* @return v
	*/
	Vehiculos ingresarVehiculo();
	/*
	* @brief ingresarCedula ingresa datos a la cedula
	* @return c
	*/
	Cedula ingresarCedula();
	/*
	* @brief ingresarfecha_de_nacimiento ingresa datos a la Fecha_de_nacimiento
	* @return fdn
	*/
	Fecha_de_nacimiento ingresarfecha_de_nacimiento();
};

#endif // INGRESODATOS_H
