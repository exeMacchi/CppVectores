// 1. Escribe un programa que defina un vector de números y calcule la suma de sus elementos.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int vNumeros[10];
    int Suma = 0;

    for (int i = 0; i < 10; i++) {
        cout << i + 1 << ". Ingrese un numero: "; cin >> vNumeros[i];
    }
    for (int i = 0; i < 10; i++) {
        Suma += vNumeros[i];
    }
    cout << "\nLa suma total: " << Suma << endl;
    return 0;
}
