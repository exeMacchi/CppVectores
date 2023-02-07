// 4. Escribe un programa que defina un vector de números y muestre en la salida estándar el vector en orden inverso
//    del último al primer elemento.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int vNumeros[10];

    for (int i = 0; i < 10; i++) {
        cout << i + 1 << ". Ingrese un numero: "; cin >> vNumeros[i];
    }


    cout << endl;
    for (int i = 10 - 1; i >= 0; i--) {
        cout << vNumeros[i] << endl;
    }
    return 0;
}
