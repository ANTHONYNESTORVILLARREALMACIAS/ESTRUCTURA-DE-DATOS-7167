/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Deber Potencia de Matrices
Autores: Anthony Villarreal, Ariel Pozo, Esteban Chablay, Espinoza Luis
Fecha de creacion: 12/11/2021
Fecha de modificacion: 14/11/2021
7167 ESTRUCTURA DE DATOS
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "Matriz.h"
#include "Matriz.cpp"
#include "Operaciones.h"
#include "Operaciones.cpp"
using namespace std;

int main()
{
    Matriz<int> m1, m2, mr, mr1;

    int dim, potencia;
    int** mat1, ** mat2, ** matR, ** matR1;
    printf("\nIngrese la dimension :");
    scanf_s("%d", &dim);
    Operaciones<int> op;
    m1.setMatriz(op.segmentar(dim));
    m2.setMatriz(op.segmentar(dim));
    mr.setMatriz(op.segmentar(dim));
    mr1.setMatriz(op.segmentar(dim));
    mat1 = m1.getMatriz();
    mat2 = m2.getMatriz();
    matR = mr.getMatriz();
    matR1 = mr.getMatriz();
    op.encerar(mat1, dim);
    op.encerar(mat2, dim);
    op.encerar(matR, dim);
    op.encerar(matR1, dim);
    cout << "\n" << endl;
    cout << "VALORES PARA LA MATRIZ" << endl;
    op.ingresar(mat1, dim);
    cout << "\n" << endl;

    cout << "MATRIZ" << endl;
    op.imprimir(mat1, dim);
    printf("\n");

    cout << "INGRESE EL VALOR DE LA POTENCIA" << endl;
    cin >> potencia;
    op.encerar(mat2, dim);
    op.autollenado(mat1, mat2, dim);
    op.potencia(mat1, mat2, matR1, dim, potencia);
    cout << "RESULTADO DE LA POTENCIA" << endl;
    op.imprimir(matR1, dim);
    return 0;
}

