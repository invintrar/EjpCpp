// Fig. 9.14: Fecha.cpp
// Definiciones de las funciones miembro de la clase Fecha.
#include <iostream>
#include "Fecha.h" // incluye la definicion de la clase Fecha de Fecha.h
using namespace std;

// Constructor de Fecha ( debe realizar comprobacion de rangos)
Fecha::Fecha( int m, int d, int a )
: mes( m ), dia( d ), anio( a )
{
} // fin del constructor de Fecha

// imprime la Fecha en el formato mm/dd/aaaa
void Fecha::imprimir()
{
    cout << mes << '/' << dia << '/' << anio;
} //fin de la funcion imprimir