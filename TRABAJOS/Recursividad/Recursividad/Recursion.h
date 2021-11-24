#pragma once

/*
* @file Recursion.h
* @version 1.9.2
* @fecha 17 / 11 / 2021
* @autor Anthony Villarreal, Ariel Pozo, Esteban Chablay, Espinoza Luis
* @title Recursion con debug
*/

/**
* @brief Recursion clase dedicada al cambio de datos de un poste a otro poste
*/
template<typename T>
class Recursion {
public:
    /*
    * @brief Pasa los elementos del poste a al poste c
    * @param int indica el numero de discos
    * @param int& indica la direccion de cada ejecucion
    * @param T permite ingresar un valor de tipo T(a,c,b)
    */
    void hanoiac(int, int&, T, T, T);
    /*
    * @brief Pasa los elementos del poste a al poste b
    * @param int indica el numero de discos
    * @param int& indica la direccion de cada ejecucion
    * @param T permite ingresar un valor de tipo T(a,c,b)
    */
    //void hanoiab(int, int&, T, T, T);
};