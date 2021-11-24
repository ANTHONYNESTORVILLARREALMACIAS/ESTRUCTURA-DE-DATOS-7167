#include "pch.h"
#include "CppUnitTest.h"
#include "..\Funciones.h"
#include "..\Funciones.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PruebaUnitaria
{
	TEST_CLASS(SumaPruebaUnitaria)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			//Datos 

			Funciones f;


			//Ejecucion
			int respuesta = f.sumar(1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2);

			//Comprobacion

			Assert::AreEqual(respuesta, 21);
		}
	};
}