#include "Recursion.h"
#include <iostream>

using namespace std;
// Desde a hasta b
template<typename T>
void Recursion<T>::hanoiac(int num, int& i, T a, T c, T b) {
    if (num == 1) {
        cout << "Mover del bloque " << num << " desde " << a << " hasta " << b << endl;
    }
    else {
        hanoiac(num - 1, i, a, b, c);
        cout << "Mover del bloque " << num << " desde " << a << " hasta " << b << endl;
        hanoiac(num - 1, i, c, a, b);
    }
    i++;
}

// Desde a hasta c
//template<typename T>
//void Recursion<T>::hanoiab(int num, int& i, T a, T c, T b) {
//    if (num == 1) {
//        cout << "Mover del bloque " << num << " desde " << a << " hasta " << c << endl;
//    }
//    else {
//        hanoiab(num - 1, i, a, b, c);
//        cout << "Mover del bloque " << num << " desde " << a << " hasta " << c << endl;
//        hanoiab(num - 1, i, b, c, a);
//    }
//    i++;
//}