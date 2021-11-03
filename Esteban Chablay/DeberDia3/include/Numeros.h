#ifndef NUMEROS_H
#define NUMEROS_H
#include <stdlib.h>
#include <iostream>

template <class T>
class Numeros
{
    public:
        void setNum1(T n);
        T getNum1();
        void setNum2(T n);
        T getNum2();
    private:
        T num1;
        T num2;
};

#endif // NUMEROS_H
