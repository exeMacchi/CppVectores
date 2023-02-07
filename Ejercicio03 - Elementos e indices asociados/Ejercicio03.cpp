// 3. Escribe un programa que lea de la entrada estándar un vector de números y muestre en la salida estándar
//    los números del vector con sus índices asociados.

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
    for (int i = 0; i < 10; i++) {
        cout << vNumeros[i] << " --> " << i << endl;
    }

    return 0;
}
