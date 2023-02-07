// 8. Hacer un programa que lea 5 números en un arreglo, los copie a otro arreglo multiplicados por 2 y muestre 
//    el segundo arreglo.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    setlocale(LC_ALL, "es_ES");
    int vNumeros1[5], vNumeros2[5];

    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". Ingrese un número: "; cin >> vNumeros1[i];
    }

    for (int i = 0; i < 5; i++) {
        vNumeros2[i] = vNumeros1[i] * 2;
    }

    cout << endl;
    for (int i = 0; i < 5; i++) {
        cout << vNumeros1[i] << " * 2 = " << vNumeros2[i] << endl;
    }
    return 0;
}
