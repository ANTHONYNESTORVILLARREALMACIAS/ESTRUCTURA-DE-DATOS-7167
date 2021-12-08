#ifndef LISTADOBLECIRCULAR_H
#define LISTADOBLECIRCULAR_H
#include "Nodo.h"
#include <iostream>
#include <random>
#include <string>
using namespace std;

/**
* @file ListaDobleCircular.h
* @version 1.9.2
* @date 08/12/2021
* @author Anthony Villarreal, Ariel Pozo, Esteban Chablay, Espinoza Luis
* @title Proyecto_Unidad_1
*/

/*
* @brief ListaDobleCircular clase dedicada a la creacion de una lista circular doblemente enlazada
*/
class ListaDobleCircular {
public:
	/*
	* @brief ListaDobleCircular constructor vacio
	*/
	ListaDobleCircular();
	/*
	* @brief insertar se ingresa datos a la lista
	* @param Persona
	*/
	void insertar(Persona);
	/*
	* @brief eliminarNodo se elimina un nodo en especifico
	* @param long int se ingresa el dato a buscar(cedula)
	*/
	void eliminarNodo(long int);
	/*
	* @brief modificar se modifica un nodo en especifico
	* @param long int se ingresa el dato a buscar(cedula)
	*/
	void modificar(long int);
	/*
	* @brief imprimir imprime la lista
	*/
	void imprimir();
	/*
	* @brief vacio devuelve un valor booleano si esta o no vacia
	*/
	bool vacio();
	/*
	* @brief getPrimero obtiene el dato primero
	* @return primero
	*/
	Nodo* getPrimero();
	/*
	* @brief getUltimo obtiene el dato ultimo
	* @return utlimo
	*/
	Nodo* getUltimo();
	/*
	* @brief setPrimero setea el dato primero
	* @param Nodo*
	*/
	void setPrimero(Nodo*);
	/*
	* @brief setUltimo setea el dato ultimo
	* @param Nodo*
	*/
	void setUltimo(Nodo*);
	/*
	* @brief buscarNodo busca un nodo especifico
	* @param long int se ingresa el dato a buscar(cedula)
	*/
	void buscarNodo(long int);

private:
	Nodo* primero;
	Nodo* ultimo;
};

#endif // LISTADOBLECIRCULAR_H
