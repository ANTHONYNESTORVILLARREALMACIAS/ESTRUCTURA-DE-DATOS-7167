
#pragma once

#include <iostream>
#include <stdlib.h>

template <typename T>
class Numero {
public:

	//setters
	void setNum1(T n1);
	void setNum2(T n2);
	//getters
	T getNum1()const;
	T getNum2()const;
	//constructor

	 Numero<T>(T num1,T  num2);
private:
	T numero1;
	T numero2;
};
