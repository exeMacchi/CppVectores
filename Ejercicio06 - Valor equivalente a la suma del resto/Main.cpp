/*
    6. Escribe un programa que defina un vector de números y calcule si existe 
       algún número en el vector cuyo valor equivale a la suma del resto de 
       números del vector.
*/

#include <iostream>
#include <locale>

int main()
{
    setlocale(LC_ALL, "es_ES");

    constexpr int tamMax{ 15 };
    int vNumeros[tamMax]{}, sumaAcumulada{ 0 };

    for (int i{ 0 }; i < tamMax; i++)
    {
        std::cout << i + 1 << ". Ingrese un número: "; std::cin >> vNumeros[i];
        sumaAcumulada += vNumeros[i];
    }
    std::cout << "\n";

    for (int i{ 0 }; i < tamMax; i++)
    {
        if (vNumeros[i] == sumaAcumulada) 
        {
            std::cout << "El número " << vNumeros[i] << " es igual a la suma " 
                      << "del resto de números del vector(" << sumaAcumulada 
                      << ").\n";
            return 0;
        }
    }

	std::cout << "\nNo hay ningún número que sea igual a la suma del resto "
			  << "de números del vector (" << sumaAcumulada << ").\n";

    return 0;
}