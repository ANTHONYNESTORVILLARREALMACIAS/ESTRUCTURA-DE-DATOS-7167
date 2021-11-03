
/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Deber3
Autores:  Espinosa Luis
Fecha de creacion: 31/10/2021
Fecha de modificacion: 31/10/2021
7167 ESTRUCTURA DE DATOS
*/

#include "pch.h"
#include "CppUnitTest.h"
#include "../Luis_Espinosa_Deber3/Deber3.h"
#include "..\Luis_Espinosa_Deber3\Porcentaje.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace PruebaUnitariaDeber3
{
	TEST_CLASS(PruebaUnitariaDeber3)
	{
	public:
		
		TEST_METHOD(PorcentajeTestMethod)
		{
			//datos
			Numero <double> numreal(44, 12);
			bool comparador;
			Operacion<double> op;

			//ejecucion

			double resultado = op.Porcentaj(numreal);
			
			//verificacion

			comparador = (resultado == 5.28);
			cout << comparador;

			



		}
	};
}
