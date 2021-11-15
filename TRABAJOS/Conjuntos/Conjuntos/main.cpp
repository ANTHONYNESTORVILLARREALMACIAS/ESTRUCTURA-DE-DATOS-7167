/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Deber Union de Conjuntos
Autores: Anthony Villarreal, Ariel Pozo, Esteban Chablay, Espinoza Luis
Fecha de creacion: 12/11/2021
Fecha de modificacion: 14/11/2021
7167 ESTRUCTURA DE DATOS
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "Conjuntos.h"
#include "Procesos.h"
using namespace std;

int main()
{
    Conjunto c;
    Proceso p;
    int t1,t2,tr,opcion;

    cout << "Ingrese el tamanio del conjunto 1: ";
    cin >> t1;
    int* conj1 = (int*)malloc( t1 * sizeof(int));
    c.ingresar(conj1, t1);

    cout << "Ingrese el tamanio del conjunto 2: ";
    cin >> t2;
    int* conj2 = (int*)malloc( t2 * sizeof(int));
    c.ingresar(conj2, t2);

    tr = t1 + t2;
    int* conjr = (int*)malloc(tr * sizeof(int));
    cout << "\n";
    cout << "1. Union" << endl;
    cout << "2. Interseccion" << endl;
    cout << "Elija la operacion que desea realizar: "; cin >> opcion;
    cout << "\n";

        if (opcion == 1) {
            p.unir(conj1, conj2, conjr, tr, t1);
            p.ordenar(tr, conjr);
            tr = p.eliminar(tr, conjr);
            c.imprimir(conjr, tr);

        }
        else if (opcion == 2) {
            p.unir(conj1, conj2, conjr, tr, t1);
            p.ordenar(tr, conjr);
            tr = p.intersecar(tr, conjr);
            c.imprimir(conjr, tr);
        }
        else {
            cout << "Elija una opcion correcta: ";
        }
    

    cout << endl;
    system("pause");
    return 0;
}

