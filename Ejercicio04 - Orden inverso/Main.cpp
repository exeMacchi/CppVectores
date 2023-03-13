/*
    4. Escribe un programa que defina un vector de n�meros y muestre en la 
       salida est�ndar el vector en orden inverso del �ltimo al primer elemento.
*/

#include <iostream>
#include <locale>

int main()
{
    setlocale(LC_ALL, "es_ES");

    constexpr int tamMax{ 10 };
    int vNumeros[tamMax]{};

    for (int i{ 0 }; i < 10; i++)
    {
        std::cout << i + 1 << ". Ingrese un n�mero: "; std::cin >> vNumeros[i];
    }

    std::cout << "\n";
    for (int i{ tamMax - 1 }; i >= 0; i--)
    {
        std::cout << vNumeros[i] << "\n";
    }
    return 0;
}