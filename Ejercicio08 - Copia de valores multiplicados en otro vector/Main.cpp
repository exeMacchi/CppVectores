/*
    8. Hacer un programa que lea 5 números en un arreglo, los copie a otro 
       arreglo multiplicados por 2 y muestre el segundo arreglo.
*/

#include <iostream>
#include <locale>

int main()
{
    setlocale(LC_ALL, "es_ES");

    constexpr int tamMax{ 5 };
    int vNumeros1[tamMax]{}, vNumeros2[tamMax]{};

    for (int i{ 0 }; i < tamMax; i++)
    {
        std::cout << i + 1 << ". Ingrese un número: "; std::cin >> vNumeros1[i];
    }

    for (int i{ 0 }; i < tamMax; i++)
    {
        vNumeros2[i] = vNumeros1[i] * 2;
    }

    std::cout << "\n";
    for (int i{ 0 }; i < tamMax; i++)
    {
        std::cout << vNumeros1[i] << " * 2 = " << vNumeros2[i] << "\n";
    }

    return 0;
}