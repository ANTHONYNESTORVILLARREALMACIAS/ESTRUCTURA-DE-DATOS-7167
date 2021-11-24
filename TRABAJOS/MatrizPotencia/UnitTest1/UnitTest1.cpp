#include "pch.h"
#include "CppUnitTest.h"
#include "../MatrizPotencia/Matriz.h"
#include "../MatrizPotencia/Operaciones.h"
#include <iostream>
using namespace std;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            Matriz<int> m1, m2, mr, mr1;

            int dim, potencia;
            int** mat1, ** mat2, ** matR, ** matR1;
            printf("\nIngrese la dimension :");
            scanf_s("%d", &dim);
            Operaciones<int> op;
            m1.setMatriz(op.segmentar(dim));
            m2.setMatriz(op.segmentar(dim));
            mr.setMatriz(op.segmentar(dim));
            mr1.setMatriz(op.segmentar(dim));
            mat1 = m1.getMatriz();
            mat2 = m2.getMatriz();
            matR = mr.getMatriz();
            matR1 = mr.getMatriz();
            op.encerar(mat1, dim);
            op.encerar(mat2, dim);
            op.encerar(matR, dim);
            op.encerar(matR1, dim);
            cout << "\n" << endl;
            cout << "VALORES PARA LA MATRIZ" << endl;
            op.ingresar(mat1, dim);
            cout << "\n" << endl;

            cout << "MATRIZ" << endl;
            op.imprimir(mat1, dim);
            printf("\n");

            cout << "INGRESE EL VALOR DE LA POTENCIA" << endl;
            cin >> potencia;
            op.encerar(mat2, dim);
            op.autollenado(mat1, mat2, dim);
            op.potencia(mat1, mat2, matR1, dim, potencia);
            cout << "RESULTADO DE LA POTENCIA" << endl;
            op.imprimir(matR1, dim);
            
		}
	};
}
