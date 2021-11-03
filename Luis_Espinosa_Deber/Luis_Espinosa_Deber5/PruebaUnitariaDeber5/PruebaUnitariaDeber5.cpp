/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Deber5
Autores:  Espinosa Luis
Fecha de creacion: 02/11/2021
Fecha de modificacion: 02/11/2021
7167 ESTRUCTURA DE DATOS
*/

#include "pch.h"
#include "CppUnitTest.h"
#include "../Luis_Espinosa_Deber5/Operacion.h"
#include "../Luis_Espinosa_Deber5/Deber5.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace PruebaUnitariaDeber5
{
	TEST_CLASS(PruebaUnitariaDeber5)
	{
	public:
		
		TEST_METHOD(numeroMayorTestMethod)
		{

			//datos
			Numero <double> numreal(-122, 3);
			bool comparador;
			Operacion <double> numMayorReal;

			//ejecucion

			double resultado = numMayorReal.compararNum(numreal);

			//verificacion

			cout << numMayorReal.compararNum(numreal) << " " << "Es en numero mayor " << endl;;

		}
	};
}
