#pragma once
/**
* @file Proceso.h
* @version 1.0
* @date 15/11/2021
* @author Anthony Villarreal, Ariel Pozo, Esteban Chablay, Espinoza Luis
* @title Conjuntos
*/

/**
* @brief Proceso Indica el Proceso
*/
class Proceso {

public:

	/**
	* @brief unir Realiza la union de dos conjuntos
	* @param c Recibe un conjunto
	* @param c2 Recibe el siguiente conjunto
	* @param cr Recibe un conjunto resultante
	* @param tr Recibe un tama�o total
	* @param t Recibe un tama�o
	*/
	void unir(int*c, int* c2,int* cr, int tr,int t);
	/**
	* @brief ordenar Ordena un conjunto
	* @param t Recibe un tama�o
	* @param cr Recibe un conjunto 
	*/
	void ordenar(int t, int* cr);
	/**
	* @brief eliminar Elimina los numeros que se repiten de un conjunto
	* @param t Recibe un tama�o
	* @param cr Recibe un conjunto
	* @return int
	*/
	int eliminar(int t, int* cr);
	/**
	* @brief intersecar Elimina los numeros que no se repiten de un conjunto
	* @param t Recibe un tama�o
	* @param cr Recibe un conjunto
	* @return int
	*/
	int intersecar(int t, int* cr);

};