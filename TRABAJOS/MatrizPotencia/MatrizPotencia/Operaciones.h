#pragma once

template<typename T>
class Operaciones
{
public:
	int** segmentar(T);
	void encerar(T**, T);
	void procesar(T**, T**, T**, T);
	void ingresar(T**, T);
	void imprimir(T**, T);
	void potencia(T**, T**, T**, T, T);
	void autollenado(T**, T**, T);
	Operaciones();

};