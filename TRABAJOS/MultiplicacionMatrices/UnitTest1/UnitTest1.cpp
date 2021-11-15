#include "pch.h"
#include "CppUnitTest.h"
#include <iostream>
#include "../MultiplicacionMatrices/Operacion.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int filasA, filasB, columnasA, columnasB;

			std::cout << "Ingrese el numero de filas para la matriz A: ";
			std::cin >> filasA;
			std::cout << "Ingrese el numero de columnas para la matriz A: ";
			std::cin >> columnasA;
			std::cout << "Ingrese el numero de filas para la matriz B: ";
			std::cin >> filasB;
			std::cout << "Ingrese el numero de columnas para la matriz B: ";
			std::cin >> columnasB;

			int** matriz1;
			int** matriz2;
			int** matrizResultante;
			Operacion<int> op;
			std::cout << "////////Ingrese la matriz 1////////\n";
			matriz1 = op.segmentar(filasA, columnasA);
			op.ingresar(matriz1, filasA, columnasA);
			std::cout << "////////Matriz 1////////\n";
			op.imprimir(matriz1, filasA, columnasA);


			std::cout << "////////Ingrese la matriz 2////////\n";
			matriz2 = op.segmentar(filasB, columnasB);
			op.ingresar(matriz2, filasB, columnasB);
			std::cout << "////////Matriz 2////////\n";
			op.imprimir(matriz2, filasB, columnasB);

			matrizResultante = op.segmentar(filasA, columnasB);

			std::cout << "////////Resultado////////\n";
			op.multiplicacion(matriz1, matriz2, matrizResultante, filasA, columnasA, columnasB, filasB);
		}
	};
}
