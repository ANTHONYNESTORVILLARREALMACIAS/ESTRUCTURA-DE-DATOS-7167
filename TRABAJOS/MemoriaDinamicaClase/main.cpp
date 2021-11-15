#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include "src\Funciones.cpp"

/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Deber_Memoria Dinamica
Autores: Anthony Villarreal, Ariel Pozo, Esteban Chablay, Espinoza Luis
Fecha de creacion: 11/11/2021
Fecha de modificacion: 11/11/2021
7167 ESTRUCTURA DE DATOS
*/

using namespace std;

int main(int argc, char** argv) {
	int t;
	int *ptr=(int*)malloc(4*sizeof(int));
	float *ptr2=(float*)malloc(4*sizeof(float));
	printf("Ingrese el tamaño: ");
	cin>>t;
	printf("\n|------- ENTEROS -------|\n");
	ingresar(ptr, t);
	imprimir(ptr, t);
	procesar(ptr, t);
	imprimir(ptr, t);

	printf("\n|------- FLOTANTES -------|\n");
	ingresar(ptr2, t);
	imprimir(ptr2, t);
	procesar(ptr2, t);
	imprimir(ptr2, t);


	return 0;
}
