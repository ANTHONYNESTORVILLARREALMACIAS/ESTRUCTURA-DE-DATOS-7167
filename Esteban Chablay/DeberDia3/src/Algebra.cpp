#include "Algebra.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

template <class A>
void multiplicacion(A num1, A num2){
    cout<<"El resultado de la multiplicacion es: "<<num1*num2<<endl;
}

template <class A>
void division(A num1, A num2){
    A resultado;
    resultado = num1 / num2;
    cout<<"El resultado de la division es: "<<resultado<<endl;
}

template <class A>
void suma(A num1, A num2){
    A resultado;
    resultado = num1+num2;
    cout<<"El resultado de la suma es: "<<resultado<<endl;
}

template <class A>
void resta(A num1, A num2){
    A resultado;
    resultado = num1-num2;
    cout<<"El resultado de la resta es: "<<resultado<<endl;
}
