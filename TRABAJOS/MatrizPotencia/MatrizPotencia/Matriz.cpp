#include "Matriz.h"

#include "Matriz.h"
template<typename T>
T** Matriz<T>::getMatriz(void)
{
	return matriz;
}
template<typename T>
void Matriz<T>::setMatriz(T** matrix)
{
	matriz = matrix;
}
template<typename T>
Matriz<T>::Matriz(T** _matriz)
{
	this->matriz = _matriz;
}
template<typename T>
Matriz<T>::Matriz() {
}