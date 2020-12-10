// Ej. 7.17:ej07_17.cpp
// Qué hace estre programa?
#include <iostream>
#include <array>
using namespace std;

const size_t tamanioArreglo = 10;
int queEsEsto ( const array < int, tamanioArreglo > &, size_t); // prototipo

int main()
{
    array < int, tamanioArreglo > a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int resultado = queEsEsto(a, tamanioArreglo);

    cout << "El resultado es " << resultado << endl;
} // fin main

// Que hade esta funcion?
int queEsEsto( const array < int, tamanioArreglo > &b, size_t tamanio )
{
    if ( tamanio == 1) // caso base
        return b[0];
    else 
        return b[tamanio - 1 ] + queEsEsto( b, tamanio - 1);
}// fin de la función queEsEsto