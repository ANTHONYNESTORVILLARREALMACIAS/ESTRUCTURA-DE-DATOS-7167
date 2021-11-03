#include "pch.h"
#include "CppUnitTest.h"
#include "../Luis_Espinosa_Deber2/Deber2.h"
#include "../Luis_Espinosa_Deber2/Operacion.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

using namespace std;
namespace PruebaUnitariaDeber2
{
	TEST_CLASS(PruebaUnitariaDeber2)
	{
	public:
		
		TEST_METHOD(ModuloNumTestMethod)
		{

			Numero <double> cor(422, 123);
			Numero <float> corf(12.45f, 14.77f);

			Operacion <double> op;
			Operacion <float> opf;

			cout << "El modulo resultante de reales es :" << op.moduloNum(cor) << endl;
			cout << "El modulo resultante de flotantes es :" << opf.moduloNum(corf) << endl;
			
		}
	};
}
