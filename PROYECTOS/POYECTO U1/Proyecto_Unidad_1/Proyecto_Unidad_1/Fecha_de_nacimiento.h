#ifndef FECHA_DE_NACIMIENTO_H
#define FECHA_DE_NACIMIENTO_H
#include <iostream>
#include <string>

using namespace std;

/**
* @file Fecha_de_nacimiento.h
* @version 1.9.2
* @date 08/12/2021
* @author Anthony Villarreal, Ariel Pozo, Esteban Chablay, Espinoza Luis
* @title Proyecto_Unidad_1
*/
class Persona;
/*
* @brief Fecha_de_nacimiento clase dedicada a la creacion de una fecha
*/
class Fecha_de_nacimiento
{
public:
    /*
    * @brief getDia obtiene el dia
    * @return dia
    */
    string getDia(void);
    /*
    * @brief setDia setea el dia
    * @param string newDia
    */
    void setDia(string newDia);
    /*
    * @brief getMes obtiene el mes
    * @return mes
    */
    string getMes(void);
    /*
    * @brief setMes setea el mes
    * @param string newMes
    */
    void setMes(string newMes);
    /*
    * @brief getAnio obtiene el anio
    * @return anio
    */
    string getAnio(void);
    /*
    * @brief setAnio setea el anio
    * @param string newAnio
    */
    void setAnio(string newAnio);
    
protected:
private:
	string dia;
	string mes;
	string anio;
};

#endif // FECHA_DE_NACIMIENTO_H
