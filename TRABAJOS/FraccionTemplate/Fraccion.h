#ifndef FRACCION_H
#define FRACCION_H
/**
* @file Fraccion.h
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
* @brief Fraccion clase dedicada a la creacion de una fraccion
*/
class Fraccion
{
    public:

        /**
        * @brief setNumerador setea el Numerador
        * @param float newNumerador
        */
        void setNum(H n);
        
        /**
        * @brief getNumerador obtiene numerador
        * @return float
        */
        H getNum();
        
        /**
        * @brief setDenominador setea el Denominador
        * @param float newDenominador
        */
        void setDen(H n);

        /**
        * @brief getDenominador obtiene denominador
        * @return float
        */
        H getDen();

        /**
        * @brief Constructor por defecto de la Fraccion
        * @param  num Indica numerador
        * @param  den  Indica denominador
        */
        Fraccion(H num, H den);

    private:
        H numerador;
        H denominador;
};

#endif // FRACCION_H
