/*
    7. Realice un programa que defina dos vectores de caracteres y después 
       almacene el contenido de ambos vectores en un nuevo vector, situando 
       en primer lugar los elementos del primer vector seguido por los elementos
       del segundo vector. 
       Muestre el contenido del nuevo vector en la salida estándar.
*/

#include <iostream>
#include <iterator>

int main()
{
    constexpr int tamMax{ 30 };
    char letrasFinal[tamMax]{};
    char letrasParteUno[] = { 'a', 'b', 'c', 'd', 'e' };
    char letrasParteDos[] = { 'f', 'g', 'h', 'i', 'j', 'k'};
    const int tamMaxParteUno{ std::size(letrasParteUno) };
    const int tamMaxParteDos{ std::size(letrasParteDos) };

    for (int i{ 0 }; i < tamMaxParteUno; i++)
    {
        letrasFinal[i] = letrasParteUno[i];
    }

    for (int i{ 0 }; i < tamMaxParteDos; i++)
    {
        letrasFinal[i + tamMaxParteUno] = letrasParteDos[i];
    }

    for (int i{ 0 }; letrasFinal[i] != '\0'; i++)
    {
        std::cout << letrasFinal[i] << " ";
    }
    return 0;
}