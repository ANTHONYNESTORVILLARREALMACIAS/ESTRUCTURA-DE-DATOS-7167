#pragma once

/**
* @file Fraccion.h
* @version 1.9.2
* @date 09/11/2021
* @author Anthony Villarreal, Ariel Pozo, Esteban Chablay, Espinoza Luis
* @title Ejercicio Sumatoria de un archivo de texto
*/

/**
* @brief Funciones clase dedicada a la declaracion de Funciones
*/
class Funciones{
	public:

		/**
		* @brief Clase Almacenar datos
		* @param Args Cualquier tipo de argumento
		*/
		template<class... Args>
		
		/**
		* @brief sumar Suma los datos 
		* @param Args Cualquier tipo de argumento
		*/
		auto sumar(Args... args);
		
		/**
		* @brief Funciones clase dedicada a la declaracion de Funciones
		*/
		void leerArchivo();
};

