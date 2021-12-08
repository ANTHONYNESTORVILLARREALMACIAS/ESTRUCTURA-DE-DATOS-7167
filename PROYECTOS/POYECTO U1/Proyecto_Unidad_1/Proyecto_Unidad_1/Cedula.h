#ifndef CEDULA_H
#define CEDULA_H
#include <iostream>
#include <string>

using namespace std;

/**
* @file Cedula.h
* @version 1.9.2
* @date 08/12/2021
* @author Anthony Villarreal, Ariel Pozo, Esteban Chablay, Espinoza Luis
* @title Proyecto_Unidad_1
*/

/*
* @brief Cedula clase dedicada a la creacion de una cedula
*/
class Cedula
{
public:
	/*
	* @brief Cedula constructor de cedula por defecto
	* @param long int
	*/
	Cedula(long int);
	/*
	* @brief Cedula constructor vacio por defecto
	*/
	Cedula() = default;
	/*
	* @brief getNumCedula obtiene el numero de la cedula
	* @return numCedula
	*/
	long int getNumCedula(void);
	/*
	* @brief setNumCedula setea el numero de la cedula
	* @param long int newNumCedula
	*/
	void setNumCedula(long int newNumCedula);
protected:
private:
	long int numCedula;
};

#endif // CEDULA_H
