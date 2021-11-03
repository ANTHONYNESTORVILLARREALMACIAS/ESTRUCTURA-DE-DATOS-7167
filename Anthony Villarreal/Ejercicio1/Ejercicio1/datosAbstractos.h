#pragma once

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

template <typename tipoDato>
class datosAbstractos {
private:
	tipoDato valor1;
	tipoDato valor2;
public:
	void setValor1(tipoDato _valor1);
	datosAbstractos(tipoDato _valor1, tipoDato _valor2);
	tipoDato getValor1();
	void setValor2(tipoDato _valor2);
	tipoDato getValor2();
	//string to_String();

};

