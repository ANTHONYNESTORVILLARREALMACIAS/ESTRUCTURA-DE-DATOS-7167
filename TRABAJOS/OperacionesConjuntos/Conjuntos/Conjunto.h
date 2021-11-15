#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

template <class T>
class Conjunto
{
public:
	void set_conjuntoA(T);
	void set_conjuntoB(T);
	void unionC();
	void interseccionC();

	 std::vector<T> conjuntoA;
	 std::vector<T> conjuntoB;
	 std::vector<T> _union;
	 std::vector<T> _interseccion;
};

