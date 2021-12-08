#ifndef VEHICULOS_H
#define VEHICULOS_H
#include <iostream>
#include <string>

using namespace std;

/**
* @file Vehiculos.h
* @version 1.9.2
* @date 08/12/2021
* @author Anthony Villarreal, Ariel Pozo, Esteban Chablay, Espinoza Luis
* @title Proyecto_Unidad_1
*/

/*
* @brief Vehiculos clase dedicada a la creacion de vehiculos
*/
class Vehiculos
{
public:
	/**
	* @brief Constructor por defecto de la clase Vehiculos
	* @param  string Indica la placa,color,marca y kilometraje
	*/
	Vehiculos(string);
	/**
	* @brief Vehiculos constructor vacio de la clase Vehiculos
	*/
	Vehiculos() = default;
	/**
	* @brief getPlaca obtiene la placa
	* @return string
	*/
	string getPlaca(void);
	/**
	* @brief setPlaca setea la placa
	* @param string newPlaca
	*/
	void setPlaca(string newPlaca);
	/**
	* @brief getColor obtiene el color
	* @return string
	*/
	string getColor(void);
	/**
	* @brief setColor setea el color
	* @param string newColor
	*/
	void setColor(string newColor);
	/**
	* @brief getMarca ovtiene la marca
	* @return string
	*/
	string getMarca(void);
	/**
	* @brief setMarca setea la marca
	* @param string newMarca
	*/
	void setMarca(string newMarca);
	/**
	* @brief getKilometraje obtiene el kilometraje
	* @return string
	*/
	string getKilometraje(void);
	/**
	* @brief setKilometraje setea el kilometraje
	* @param string newKilometraje
	*/
	void setKilometraje(string newKilometraje);

protected:
private:
	string placa;
	string color;
	string marca;
	string kilometraje;
};

#endif // VEHICULOS_H
