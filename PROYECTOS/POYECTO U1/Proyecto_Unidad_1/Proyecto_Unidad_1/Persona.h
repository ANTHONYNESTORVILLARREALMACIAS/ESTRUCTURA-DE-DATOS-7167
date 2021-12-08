#ifndef PERSONA_H
#define PERSONA_H

#include "Cedula.h"
#include "Vehiculos.h"
#include "Fecha_de_nacimiento.h"
#include <iostream>
#include <string>
using namespace std;

/**
* @file Persona.h
* @version 1.9.2
* @date 08/12/2021
* @author Anthony Villarreal, Ariel Pozo, Esteban Chablay, Espinoza Luis
* @title Proyecto_Unidad_1
*/

/*
* @brief Persona clase dedicada a la creacion de una Persona
*/
class Persona
{
public:
	/**
	* @brief Constructor por defecto de la clase Persona
	* @param string Indica nombre 1
	* @param string Indica nombre 2
	* @param string Indica apellido 1
	* @param string Indica apellido 2
	* @param Vehiculos Indica la clase Vehiculos
	* @param Fecha_de_nacimiento Indica la clase Fecha_de_nacimiento
	* @param Cedula Indica la clase Cedula
	* @param string Indica correo
	*/
	Persona(string, string, string, string, Vehiculos, Fecha_de_nacimiento, Cedula, string);
	/**
	* @brief Persona constructor vacio de la clase Vehiculos
	*/
	Persona() = default;
	/**
	* @brief getNombre1 obtiene el nombre 1
	* @return string
	*/
	string getNombre1(void);
	/**
	* @brief setNombre1 setea el nombre 1
	* @param string newNombre1
	*/
	void setNombre1(string newNombre1);
	/**
	* @brief getNombre2 obtiene el nombre 2
	* @return string
	*/
	string getNombre2(void);
	/**
	* @brief setNombre2 setea el nombre 2
	* @param string newNombre2
	*/
	void setNombre2(string newNombre2);
	/**
	* @brief getApellido1 obtiene el apellido 1
	* @return string
	*/
	string getApellido1(void);
	/**
	* @brief setApellido1 setea el apellido 1
	* @param string newApellido1
	*/
	void setApellido1(string newApellido1);
	/**
	* @brief getApellido2 obtiene el apellido 2
	* @return string
	*/
	string getApellido2(void);
	/**
	* @brief setApellido2 setea el apellido 2
	* @param string newApellido2
	*/
	void setApellido2(string newApellido2);
	/**
	* @brief getVehiculo obtiene la clase vehiculo
	* @return string
	*/
	Vehiculos getVehiculo(void);
	/**
	* @brief setVehiculo setea la clase vehiculo
	* @param string newVehiculo
	*/
	void setVehiculo(Vehiculos newVehiculo);
	/**
	* @brief getFec_naci obtiene la Fecha_de_nacimiento
	* @return string
	*/
	Fecha_de_nacimiento getFec_naci(void);
	/**
	* @brief setFec_naci setea la clase fecha_de_nacimiento
	* @param string newFec_naci
	*/
	void setFec_naci(Fecha_de_nacimiento newFec_naci);
	/**
	* @brief getCedula obtiene la cedula
	* @return string
	*/
	Cedula getCedula(void);
	/**
	* @brief setCedula setea la cedula
	* @param string newCedula
	*/
	void setCedula(Cedula newCedula);
	/**
	* @brief getCorreo obtiene el correo
	* @return string
	*/
	string getCorreo();
	/**
	* @brief setCorreo setea el correo
	* @param string newCorreo
	*/
	void setCorreo(string newCorreo);
	/**
	* @brief mostrarPersona muestra la clase Persona
	*/
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
