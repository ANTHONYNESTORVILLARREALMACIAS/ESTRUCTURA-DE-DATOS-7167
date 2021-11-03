#pragma once

template <typename tipoDato>
class numeros
{
public:
	void setValor1(tipoDato valor01);
	numeros(tipoDato valor01, tipoDato valor02);
	tipoDato getValor1();
	void setValor2(tipoDato valor02);
	tipoDato getValor2();

private:
	tipoDato valor1;
	tipoDato valor2;
};
