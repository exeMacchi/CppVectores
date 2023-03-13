/*
    3. Escribe un programa que lea de la entrada estándar un vector de números y 
       muestre en la salida estándar los números del vector con sus índices 
       asociados.
*/

#include <iostream>
#include <locale>

int main()
{
    setlocale(LC_ALL, "es_ES");

    int vNumeros[10]{};

    for (int i{ 0 }; i < 10; i++)
    {
        std::cout << i + 1 << ". Ingrese un número: "; std::cin >> vNumeros[i];
    }

    std::cout << "\n";
    for (int i{ 0 }; i < 10; i++)
    {
        std::cout << vNumeros[i] << " --> " << i << "\n";
    }

    return 0;
}