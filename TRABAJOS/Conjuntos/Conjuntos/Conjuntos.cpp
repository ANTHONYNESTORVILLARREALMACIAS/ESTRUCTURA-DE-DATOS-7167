#include "Conjuntos.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void Conjunto::ingresar(int* p, int t) {
	int i;
	for (i = 0; i < t; i++) {
		printf("Ingrese el valor %i: ",(i+1));
		scanf_s("%d", *(&p) + i);
	}		
}
void Conjunto::imprimir(int* p, int t) {
	int i;
	for (i = 0; i <t; i++) {
		printf("\nValor ingresado: ");
		printf_s("%d", *(&(*p)));
		*(p++);
	}
}
void Conjunto::setConj(int* conj) {
	this->conj = conj;
}
int* Conjunto::getConj(void) {
	return this->conj;
}
void Conjunto::setElem(int elem) {
	this->elem = elem;
}
int Conjunto::getElem(void) {
	return this->elem;
}
Conjunto::Conjunto() {
	
}
Conjunto::Conjunto(int* conj, int elem) {

	this->conj = conj;
	this->elem = elem;

}