#ifndef VALIDACIONES_H
#define VALIDACIONES_H
#include <iostream>
#include <string.h>
/**
* @file Validaciones.h
* @version 1.9.2
* @date 08/12/2021
* @author Anthony Villarreal, Ariel Pozo, Esteban Chablay, Espinoza Luis
* @title Proyecto_Unidad_1
*/

/*
* @brief Validaciones clase dedicada a validar los ingresos
*/
class Validaciones {
public:
	/**
	* @brief ingreson1 verifica que se ingresen solo letras al nombre 1
	* @param const char*
	* @return n1
	*/
	char* ingreson1(const char*);
	/**
	* @brief ingreson2 verifica que se ingresen solo letras al nombre 2
	* @param const char*
	* @return n2
	*/
	char* ingreson2(const char*);
	/**
	* @brief ingresoap1 verifica que se ingresen solo letras al apellido 1
	* @param const char*
	* @return ap1
	*/
	char* ingresoap1(const char*);
	/**
	* @brief ingresoap2 verifica que se ingresen solo letras al apellido 2
	* @param const char*
	* @return ap2
	*/
	char* ingresoap2(const char*);
	/**
	* @brief ingresocedula verifica que se ingresen solo 10 numeros a la cedula
	* @param const char*
	* @return c
	*/
	char* ingresocedula(const char*);
	/**
	* @brief ingresoplaca verifica que se ingresen maximo 4 letras, 4 numeros y un (-)
	* @param const char*
	* @return placa
	*/
	char* ingresoplaca(const char*);
	/**
	* @brief ingresocolorveh verifica que se ingresen solo letras
	* @param const char*
	* @return colorveh
	*/
	char* ingresocolorveh(const char*);
	/**
	* @brief ingresomarca verifica que se ingresen solo letras
	* @param const char*
	* @return marca
	*/
	char* ingresomarca(const char*);
	/**
	* @brief ingresokilometraje verifica que se ingresen solo numeros
	* @param const char*
	* @return kilometraje
	*/
	char* ingresokilometraje(const char*);
	/**
	* @brief ingresodia verifica que se ingresen solo numeros de 2 digitos 01
	* @param const char*
	* @return dia
	*/
	char* ingresodia(const char*);
	/**
	* @brief ingresomes verifica que se ingresen solo numeros de 2 digitos 01
	* @param const char*
	* @return mes
	*/
	char* ingresomes(const char*);
	/**
	* @brief ingresoanio verifica que se ingresen solo numeros de 4 digitos 2001
	* @param const char*
	* @return anio
	*/
	char* ingresoanio(const char*);
	/**
	* @brief separar_cifras separa las cifras una por una de un string
	* @param long int a 
	* @param int A[] 
	*/
	void separar_cifras(long int a, int A[]);
	/**
	* @brief validar valida que hayan cifras
	* @param long int a
	* @param int A[]
	*/
	int validar(long int a, int A[]);
};

#endif // VALIDACIONES_H
