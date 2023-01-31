// 2. Escribe un programa que defina un vector de números y calcule la multiplicación acumulada de sus elementos.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int vNumeros[10], Multiplicacion = 1;

    for (int i = 0; i < 10; i++) {
        cout << i + 1 << ". Ingrese un numero: "; cin >> vNumeros[i];
    }
    for (int i = 0; i < 10; i++) {
        Multiplicacion *= vNumeros[i];
    }

    cout << "\nLa multiplicacion acumulada: " << Multiplicacion << endl;
    return 0;
}
