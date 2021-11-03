#include <iostream>
#include "Deber2.h"

template <typename T>
void Numero<T>::setNum1(T n1) {
	this->numero1 = n1;
}

template <typename T>
void Numero<T>::setNum2(T n2) {
	this->numero2 = n2;
}


template <typename T>
T Numero<T>::getNum1() const {
	return this->numero1;
}

template <typename T>
T Numero<T>::getNum2() const {
	return this->numero2;
}

template <typename T>
Numero <T>::Numero(T num1, T  num2)
{
	this->numero1 = num1;
	this->numero2 = num2;
}