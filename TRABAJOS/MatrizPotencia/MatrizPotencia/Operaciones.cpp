#include "Operaciones.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

template<typename T>
int** Operaciones<T>::segmentar(T dim) {
    int** matriz, j;
    matriz = (int**)malloc(dim * sizeof(int*));
    for (j = 0; j < dim; j++) {
        *(matriz + j) = (int*)malloc(dim * sizeof(int));
    }
    return matriz;
}
template<typename T>
void Operaciones<T>::encerar(T** matriz, T dim)
{
    int i, j;
    for (i = 0; i < dim; i++)
        for (j = 0; j < dim; j++)
            *(*(matriz + i) + j) = 0;
}template<typename T>

void Operaciones<T>::autollenado(T** matriz1, T** matriz2, T dim)
{
    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            *(*(matriz2 + i) + j) = *(*(matriz1 + i) + j);
        }
    }
}
template<typename T>
void Operaciones<T>::procesar(T** matriz1, T** matriz2, T** matrizR, T dim)
{
    int i, j, k;
    for (i = 0; i < dim; i++) {
        for (j = 0; j < dim; j++) {
            for (k = 0; k < dim; k++) {
                *(*(matrizR + i) + j) = *(*(matrizR + i) + j) + *(*(matriz1 + i) + k) * *(*(matriz2 + k) + j);
            }
        }
    }
}
template<typename T>
void Operaciones<T>::potencia(T** matriz1, T** matriz2, T** matrizR, T dim, T potencia)
{
    int i, j, k, n;
    for (n = 0; n < potencia - 1; n++) {
        Operaciones::encerar(matrizR, dim);
        for (i = 0; i < dim; i++) {
            for (j = 0; j < dim; j++) {
                for (k = 0; k < dim; k++) {
                    *(*(matrizR + i) + j) = *(*(matrizR + i) + j) + *(*(matriz1 + i) + k) * *(*(matriz2 + k) + j);
                }
            }
        }
        Operaciones<T>::encerar(matriz2, dim);
        for (int i = 0; i < dim; i++) {
            for (int j = 0; j < dim; j++) {
                *(*(matriz2 + i) + j) = *(*(matrizR + i) + j);
            }
        }
    }


}
template<typename T>
void Operaciones<T>::ingresar(T** matriz, T dim) {
    int i, j;
    for (i = 0; i < dim; i++)
        for (j = 0; j < dim; j++) {
            cout << "----------------------------------------" << endl;
            cout << "Ingrese el valor " << "[" << i << "]" << "[" << j << "]" << " de la matriz: " << endl;
            scanf_s("%d", &(*(*(matriz + i) + j)));
            cout << "----------------------------------------" << endl;
        }
}
template<typename T>
void Operaciones<T>::imprimir(T** matriz, T dim) {
    int i, j;
    for (i = 0; i < dim; i++) {
        for (j = 0; j < dim; j++) {
            printf("|");
            printf("%d", *(*(matriz + i) + j));
            printf("|");
        }
        printf("\n");
    }
}
template<typename T>
Operaciones<T>::Operaciones()
{
}