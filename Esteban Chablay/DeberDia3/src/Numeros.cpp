#include "Numeros.h"

template <class T>
void Numeros<T>::setNum1(T n){
    this->num1=n;
}

template <class T>
T Numeros<T>::getNum1(){
    return this->num1;
}

template <class T>
void Numeros<T>::setNum2(T n){
    this->num2=n;
}

template <class T>
T Numeros<T>::getNum2(){
    return this->num2;
}
