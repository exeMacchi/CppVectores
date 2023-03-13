// 2. Escribe un programa que defina un vector de números y calcule la 
//    multiplicación acumulada de sus elementos.

#include <iostream>
#include <locale>

int main()
{
    setlocale(LC_ALL, "es_ES");

    int vNumeros[10]{}, Multiplicacion{ 1 };

    for (int i{ 0 }; i < 10; i++)
    {
        std::cout << i + 1 << ". Ingrese un número: "; std::cin >> vNumeros[i];
    }

    for (int i{ 0 }; i < 10; i++)
    {
        Multiplicacion *= vNumeros[i];
    }

    std::cout << "\nLa multiplicación acumulada: " << Multiplicacion << "\n";

    return 0;
}