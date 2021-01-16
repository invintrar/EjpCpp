// Fig. 9.18: Fecha.cpp
// Definiciones de las funciones miembro de la clase Fecha
#include <array>
#include <iostream>
#include <stdexcept>
#include "Fecha.h" // incluye la definicion de la clase Fecha
using namespace std;

// el contructor confirma el valor apropiado par el mes; llama
// a la funcion utilitaria comprobarDia para confirmar un valor apropiado para dia
Fecha::Fecha( int mn, int dd, int aa )
{
    if ( mn > 0 && mn <= mesesPorAnio ) // valida el mes
        mes = mn;
    else 
        throw invalid_argument( "mes debe estar entre 1 y 12" );
    
    anio = aa; // se pudo validar aa
    dia = comprobarDia( dd ); // valida dia

    // imprime objeto Fecha para mostrar cuando se llama a su constructor
    cout << "Constructor del objeto Fecha para fecha ";
    imprimir();
    cout << endl;
} // fin del constructor de Fecha

// imprime objeto Fecha en el formato mes/dia/anio
void Fecha::imprimir() const
{
    cout << mes << '/' << dia << '/' << anio;
} // fin de la funcion imprimir

// imprime objeto Fecha para mostrar cuando se llama a su destructor
Fecha::~Fecha()
{
    cout << "Destructor del objeto Fecha para fecha";
    imprimir();
    cout << endl;
} // din del destructor ~Fecha

// funcion utilitaria par confirma el valor de dia apropiado con base 
// en mes y anio; maneja anos bisiestos tambien
unsigned int Fecha::comprobarDia( int diaPrueba ) const
{
    static const array< int, mesesPorAnio + 1 > diasPorMes = 
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // determina si diaPrueba es valido para el mes especificado
    if ( diaPrueba > 0 && diaPrueba <= diasPorMes[ mes ])
        return diaPrueba;
    
    // comprueba 29 de febrero para ano bisiesto
    if( mes == 2 && diaPrueba == 29 && ( anio % 400 == 0 || 
    ( anio % 4 = 0 && anio % 100 != 0 ) ) )
        return diaPrueba;
}