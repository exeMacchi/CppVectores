/*
    5. Desarrolle un programa que lea de la entrada estándar un vector de 
       enteros y determine el mayor elemento del vector.
*/

#include <iostream>
#include <locale>

int main()
{
    setlocale(LC_ALL, "es_ES");

    constexpr int tamMax{ 20 };
    int vNumeros[tamMax]{}, maxNumero{};

    for (int i{ 0 }; i < tamMax; i++)
    {
        std::cout << i + 1 << ". Ingrese un número: "; std::cin >> vNumeros[i];
    }

    for (int i = 0; i < tamMax; i++) 
    {
        if (i == 0) 
        {
            maxNumero = vNumeros[i];
        }
        else if (vNumeros[i] > maxNumero) 
        {
            maxNumero = vNumeros[i];
        }
    }

    std::cout << "\nEl máximo es: " << maxNumero << "\n";

    return 0;
}