/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Deber Multiplicacion de Matrices m*n
Autores: Anthony Villarreal, Ariel Pozo, Esteban Chablay, Espinoza Luis
Fecha de creacion: 12/11/2021
Fecha de modificacion: 14/11/2021
7167 ESTRUCTURA DE DATOS
*/

/**
* @file Operacion.h
* @version 1.9.2
* @date 14/11/2021
* @author Anthony Villarreal, Ariel Pozo, Esteban Chablay, Espinoza Luis
* @title Deber Multiplicacion de Matrices m*n
*/

#pragma once

template<typename T>
class Operacion {
public:

	/**
	* @brief segmentar Permite reservar espacio de memoria para una matriz
	* @param T permite ingresar un valor de tipo T (filas, columnas)
	*/
	T** segmentar(T, T);
	/**
	* @brief multiplicacion Multiplica matrices si estas son compatibles
	* @param T** permite ingresar una matriz por referencia
	* @param T permite ingresar un valor de tipo T (filasA, columnasA, filasB, columnasB)
	*/
	void multiplicacion(T**, T**, T**, T, T, T, T);
	/**
	* @brief imprimir Muestra en pantalla la matriz ingresada
	* @param T** permite ingresar una matriz por referencia
	* @param T permite ingresar un valor de tipo T (filas, columnas)
	*/
	void imprimir(T**, T, T);
	/**
	* @brief validacion Determina si dos matrices son o no multiplicables
	* @param T permite ingresar valores de tipo T (columnasA, filasB)
	* @return bool
	*/
	bool validacion(T,T);
	/**
	* @brief ingresar Permite ingresar valores a una matriz
	* @param T** permite ingresar una matriz por referencia
	* @param T permite ingresar un valor de tipo T (filas, columnas)
	*/
	void ingresar(T**,T,T);
	
	/**
	* @brief encerar Inicializa una matriz por referencia con valores de 0
	* @param T permite ingresar un valor de tipo T (filas, columnas)
	*/
	void encerar(T** ,T,T);
};