/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Deber4
Autores:  Espinosa Luis
Fecha de creacion: 01/11/2021
Fecha de modificacion: 01/11/2021
7167 ESTRUCTURA DE DATOS
*/

#include "pch.h"
#include "CppUnitTest.h"
#include "../Luis_Espinosa_Deber4/Deber4.h"
#include "../Luis_Espinosa_Deber4/Operacion.h"

using namespace std;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PruebaUnitariaDeber4
{
	TEST_CLASS(PruebaUnitariaDeber4)
	{
	public:
		
		TEST_METHOD(valAbsTestMethod)
		{

			//datos
			Numero <double> numreal(-145);
			bool comparador;
			Operacion <double> valAbsreal;

			//ejecucion

			double resultado = valAbsreal.valAbs(numreal);

			//verificacion

			comparador = (resultado == 5.28);
			cout << comparador;

		}
	};
}
