/*
    3. Escribe un programa que lea de la entrada est�ndar un vector de n�meros y 
       muestre en la salida est�ndar los n�meros del vector con sus �ndices 
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
        std::cout << i + 1 << ". Ingrese un n�mero: "; std::cin >> vNumeros[i];
    }

    std::cout << "\n";
    for (int i{ 0 }; i < 10; i++)
    {
        std::cout << vNumeros[i] << " --> " << i << "\n";
    }

    return 0;
}