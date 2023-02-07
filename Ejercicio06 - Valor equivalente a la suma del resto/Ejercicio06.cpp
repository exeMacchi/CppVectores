// 6. Escribe un programa que defina un vector de números y calcule si existe algún número en el vector cuyo valor
//    equivale a la suma del resto de números del vector.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int const N = 15;

    int vNumeros[N], Acu = 0;
    bool ban = false;

    for (int i = 0; i < N; i++) {
        cout << i + 1 << ". Ingrese un numero: "; cin >> vNumeros[i];
        Acu += vNumeros[i];
    }

    cout << endl;
    for (int i = 0; i < N; i++) {
        if (vNumeros[i] == Acu) {
            cout << "El número " << vNumeros[i] << " es igual a la suma del resto de numeros del vector (" 
                 << Acu << ")." << endl;
            ban = true;
        }
    }
    if (!ban) {
        cout << "\nNo hay ningun numero que sea igual a la suma del resto de numeros del vector." << endl;
    }

    return 0;
}
