// 2. Escribe un programa que defina un vector de n�meros y calcule la 
//    multiplicaci�n acumulada de sus elementos.

#include <iostream>
#include <locale>

int main()
{
    setlocale(LC_ALL, "es_ES");

    int vNumeros[10]{}, Multiplicacion{ 1 };

    for (int i{ 0 }; i < 10; i++)
    {
        std::cout << i + 1 << ". Ingrese un n�mero: "; std::cin >> vNumeros[i];
    }

    for (int i{ 0 }; i < 10; i++)
    {
        Multiplicacion *= vNumeros[i];
    }

    std::cout << "\nLa multiplicaci�n acumulada: " << Multiplicacion << "\n";

    return 0;
}