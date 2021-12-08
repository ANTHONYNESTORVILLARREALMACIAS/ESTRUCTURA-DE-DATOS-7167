#ifndef GENERADOR_H
#define GENERADOR_H
#include "Nodo.h"
#include<string>
using  namespace std;

/**
* @file Generador.h
* @version 1.9.2
* @date 08/12/2021
* @author Anthony Villarreal, Ariel Pozo, Esteban Chablay, Espinoza Luis
* @title Proyecto_Unidad_1
*/

/*
* @brief Generador clase dedicada a la creacion de un correo
*/
class Generador
{
public:
	/*
	* @brief crearCorreo crea un correo de la espe con los datos ingresados
	* @param string el nombre 1
	* @param string el nombre 2
	* @param string el apellido 1
	* @return correo
	*/
	string crearCorreo(string, string, string);
	/*
	* @brief Generador constructor vacio
	*/
	Generador();
protected:
private:
	string dominio;
	/*
	* @brief existeCorreo verifica si hay lo datos necesario para que se cree un correo
	* @param string 
	* @param Nodo* obtiene los datos de la Persona
	* @return false
	*/
	bool existeCorreo(string, Nodo*);

};
#endif // GENERADOR_H
