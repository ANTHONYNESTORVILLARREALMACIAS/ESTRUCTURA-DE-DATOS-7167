#pragma once
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

template <typename tipoDato>
class datosAbstractos {
private:
	tipoDato cantidad1;
	tipoDato cantidad2;
public:
	void setCantidad1(tipoDato _cantidad1);
	datosAbstractos(tipoDato _cantidad1, tipoDato _cantidad2);
	tipoDato getCantidad1();
	void setCantidad2(tipoDato _cantidad2);
	tipoDato getCantidad2();
	//string to_String();

};