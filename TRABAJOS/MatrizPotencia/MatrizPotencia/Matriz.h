#pragma once


template<typename T>
class Matriz
{
public:
	T** getMatriz(void);
	void setMatriz(T**);
	Matriz(T**);
	Matriz();

private:
	T** matriz;
};
