#include "pch.h"
#include "CppUnitTest.h"
#include "../Luis_Espinosa_Deber6/Deber6.h"
#include "../Luis_Espinosa_Deber6/Operacion.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace PruebaUnitariaDeber6
{
	TEST_CLASS(PruebaUnitariaDeber6)
	{
	public:
		
		TEST_METHOD(polarTestMethod)
		{

			//datos
			Numero <double> numreal(42, 12);
			Numero <float> numfloat(11.11f, 71.2f);

			Operacion <double> angulReal;
			Operacion <float> angulFloat;

			//ejecucion

			double anguloReal = angulReal.anguloVec(numreal);
			double moduloReal = angulReal.moduloNum(numreal);

			double anguloFloat = angulFloat.anguloVec(numfloat);
			double moduloFloat = angulFloat.moduloNum(numfloat);

			//verificacion

			cout << "(" << moduloReal << "," << anguloReal << " )" << "Es el vector en coordenadas polares" << endl;;
			cout << "(" << moduloFloat << "," << anguloFloat << " )" << "Es el vector en coordenadas polares" << endl;;
		}
	};
}
