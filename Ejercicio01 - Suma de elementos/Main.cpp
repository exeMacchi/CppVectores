// 1. Escribe un programa que defina un vector de números y calcule la suma de 
//    sus elementos.

#include <iostream>
#include <locale>

int main()
{
    setlocale(LC_ALL, "es_ES");

    constexpr int tamMax{ 10 };
    int vNumeros[tamMax]{}, sumaAcumulada{ 0 };

    for (int i{ 0 }; i < tamMax; i++)
    {
        std::cout << i + 1 << ". Ingrese un número: "; std::cin >> vNumeros[i];
    }

    for (int i = 0; i < tamMax; i++) 
    {
        sumaAcumulada += vNumeros[i];
    }

    std::cout << "\nLa suma total: " << sumaAcumulada << "\n";
    return 0;
}