#ifndef NODO_H
#define NODO_H
#include "Persona.h"
#include<stdlib.h>

/**
* @file Nodo.h
* @version 1.9.2
* @date 08/12/2021
* @author Anthony Villarreal, Ariel Pozo, Esteban Chablay, Espinoza Luis
* @title Proyecto_Unidad_1
*/

/*
* @brief Nodo clase dedicada a la creacion de un nodo
*/
class Nodo {
public:
	/**
	* @brief Constructor por defecto de la clase Nodo
	* @param Persona Indica la clase Persona 
	*/
	Nodo(Persona);
	/**
	* @brief Nodo constructor vacio de la clase Vehiculos
	*/
	Nodo();
	/**
	* @brief getDato obtiene el dato
	* @return string
	*/
	Persona getDato();
	/**
	* @brief setDato setea el dato
	* @param Persona
	*/
	void setDato(Persona);
	/**
	* @brief getSiguiente obtiene el dato siguiente
	* @return string
	*/
	Nodo* getSiguiente();
	/**
	* @brief setSiguiente setea el dato siguiente
	* @param Nodo*
	*/
	void setSiguiente(Nodo*);
	/**
	* @brief getAnterior obtiene el dato anterior
	* @return string
	*/
	Nodo* getAnterior();
	/**
	* @brief setAnterior setea el dato anterior
	* @param Nodo*
	*/
	void setAnterior(Nodo*);
private:
	Persona dato;
	Nodo* siguiente;
	Nodo* anterior;
};
#endif // NODO_H
