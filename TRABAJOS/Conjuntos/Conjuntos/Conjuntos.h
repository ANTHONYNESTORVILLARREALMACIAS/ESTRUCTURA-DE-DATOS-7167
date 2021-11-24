#pragma once
/**
* @file Conjunto.h
* @version 1.0
* @date 15/11/2021
* @author Anthony Villarreal, Ariel Pozo, Esteban Chablay, Espinoza Luis
* @title Conjuntos
*/

/**
* @brief Conjunto Indica el Conjunto
*/
class Conjunto {
public:
	
	/**
	* @brief Ingresar Permite el ingreso de el conjunto
	* @param c Recibe un conjunto
	* @param t Recibe un tamaño
	*/
	void ingresar(int* c, int t);
	/**
	* @brief Imprimir Permite mostrar el conjunto
	* @param c Recibe un conjunto
	* @param t Recibe un tamaño
	*/
	void imprimir(int* c, int t);

	/**
	* @brief setConj Obtiene el arreglo
	* @param conj Recibe un conjunto
	*/
	void setConj(int* conj);

	/**
	* @brief getConj Muestra el Conjunto
	* @return int*
	*/
	int* getConj(void);

	/**
	* @brief setElem Obtiene en numero de elementos
	* @param elem Recibe un numero de elementos
	*/
	void setElem(int elem);

	/**
	* @brief getElem Muestra el numero de elementos
	* @return int
	*/
	int getElem(void);

	/**
	* @brief Conjunto Constructor default para la clase Conjunto
	* @return Conjunto
	*/
	Conjunto();

	/**
	* @brief Conjunto Constructor de Conjunto
	* @param conj Recibe un conjunto
	* @param conj Recibe un numero de elemntos
	* @return Conjunto
	*/
	Conjunto(int* conj, int elem);

private:

	int* conj;
	int elem;

};