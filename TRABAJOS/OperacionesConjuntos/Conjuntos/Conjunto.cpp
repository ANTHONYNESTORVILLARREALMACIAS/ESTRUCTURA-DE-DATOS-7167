#include "Conjunto.h"

template<class T>
void Conjunto<T>::set_conjuntoA(T num)
{
	conjuntoA.push_back(num);
}

template<class T>
void Conjunto<T>::set_conjuntoB(T num)
{
	conjuntoB.push_back(num);
}



template <typename T>
void Conjunto<T>::unionC()
{
	std::sort(conjuntoA.begin(), conjuntoA.end());
	std::sort(conjuntoB.begin(), conjuntoB.end());
	std::set_union(conjuntoA.begin(), conjuntoA.end(), conjuntoB.begin(), conjuntoB.end(), std::back_inserter(_union));

}

template<class T>
void Conjunto<T>::interseccionC()
{
	std::sort(conjuntoA.begin(), conjuntoA.end());
	std::sort(conjuntoB.begin(), conjuntoB.end());
	std::set_intersection(conjuntoA.begin(), conjuntoA.end(), conjuntoB.begin(), conjuntoB.end(), std::back_inserter(_interseccion));
}

template<class T>
std::ostream& operator << (std::ostream& o, const Conjunto<T>& p)
{
	std::cout << "La UNION de los conjuntos es:" << std::endl;
	for (const T& i : p._union) {
		o << i << " ";
	}
	std::cout << std::endl;
	std::cout << "La INTERSECCION de los conjuntos es:" << std::endl;
	for (const T& i : p._interseccion) {
		o << i << " ";
	}

	return o;
}

