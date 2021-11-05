#ifndef OPERACION_H
#define OPERACION_H
#include "Fraccion.h"
/**
* @file Operacion.h
* @version 1.9.2
* @date 04/11/2021
* @author Anthony Villarreal, Ariel Pozo, Esteban Chablay, Espinoza Luis
* @title Deber Fraccion Template
*/

/**
* @brief template plantilla para una función genérica con un parámetro de tipo único H
*/
template <class H>

/**
* @brief Fraccion clase dedicada a la creacion de operacion
*/
class Operacion
{
    public:

		/**
		* @brief multiplicar Multiplica los datos de la fraccion
		* @param Fraccion tipo H f1 Indica el valor de la primera fraccion
		* @param Fraccion tipo H f2 Indica el valor de la segunda fraccion
		* @return Retorna el resultado de la multiplicacion
		*/
        void multiplicar(Fraccion<H>& f1, Fraccion<H>& f2);

    protected:

    private:
};

#endif // OPERACION_H
