#include "pch.h"
#include "CppUnitTest.h"
#include "../Complejo.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PRUEBA1TEST
{
	TEST_CLASS(PRUEBA1TEST)
	{
	public:
		
		TEST_METHOD(SumaTestMethod1)
		{
			//Datos 

			Complejo<int> A(1, 3), B(2, 4);
			Complejo<int> C;
			int x, y;

			//Ejecucion

			C = A + B;

			//Comprobacion

			Assert::AreEqual(C.getReal(), 3);
			Assert::AreEqual(C.getImg(), 7);
		}

		TEST_METHOD(RestaTestMethod)
		{
			//Datos

			Complejo<int> A(1, 3), B(2, 4);
			Complejo<int> C;
			int x, y;

			//Ejecucion

			C = A - B;

			//Comprobacion

			Assert::AreEqual(C.getReal(), -1);
			Assert::AreEqual(C.getImg(), -1);

		}
	};
}
