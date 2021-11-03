#include <iostream>
#include "Deber2.cpp"
#include "Operacion.cpp"


using namespace std;

int main() {
	Numero <double> cor(422, 123);
	Numero <float> corf(12.45f, 14.77f);

	Operacion <double> op;
	Operacion <float> opf;

	cout << "El modulo resultante de reales es :" << op.moduloNum(cor) << endl;
	cout << "El modulo resultante de flotantes es :" << opf.moduloNum(corf) << endl;


}