/*UNIVERSIDAD DE LAS FUERZAS ARMADAS(ESPE)
Nombre del programa : Recursion con debug
Autores : Anthony Villarreal, Ariel Pozo, Esteban Chablay, Espinoza Luis
Fecha de creación : 17 / 11 / 2021
Fecha de modificación : 17 / 11 / 2021
7167 ESTRUCTURA DE DATOS
*/

#include <iostream>
#include "Recursion.h"
#include "Recursion.cpp"

using namespace std;

int main(){
    Recursion<char> rec;
    int num,i=0;
    cout << "\nDiscos A,B,C\n";
    cout << "Ingrese el numero de discos ";
    cin >> num;
    rec.hanoiac(num, i, 'A', 'B', 'C');
    cout << "Las veces que se realizo una ejecucion: " << i << endl;
    //rec.hanoiab(num,i,'A','B','C');
    //cout << "Las veces que se realizo una ejecucion: " << i << endl;
    return 0;
}