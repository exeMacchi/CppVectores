// 5. Desarrolle un programa que lea de la entrada estándar un vector de enteros y determine el mayor elemento
//    del vector.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int const N = 20;
    int vNumeros[N], max_numero;

    for (int i = 0; i < N; i++) {
        cout << i + 1 << ". Ingrese un numero: "; cin >> vNumeros[i];
    }
    for (int i = 0; i < N; i++) {
        if (i == 0) {
            max_numero = vNumeros[i];
        }
        else if (vNumeros[i] > max_numero) {
            max_numero = vNumeros[i];
        }
    }
    cout << "\nEl maximo es: " << max_numero << endl;
    return 0;
}
