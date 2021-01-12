// Fig. 9.2: Tiempo.cpp
// definiciones de las funciones miembro para la clase Tiempo.
#include <iostream>
#include <iomanip>
#include <stdexcept> // para la clase de excepcion invalida_argument
#include "Tiempo.h" // incluye la definicion de la clase Tiempo de Tiempo.h

using namespace std;

// el constructor de Tiempo inicializa cada miembro de datos con cero.
Tiempo::Tiempo()
    : hora( 0 ), minuto( 0 ), segundo( 0 )
{
} // fin del constructor de Tiempo

// establece el nuevo valor de Tiempo usando la hora universal 
void Tiempo::establecerTiempo( int h, int m, int s )
{
    // validando hora, minuto y segundo
    if( ( h >= 0 && h < 24 ) && ( m >= 0 && m < 60 ) &&
    ( s >= 0 && s < 60 ) )
    {
        hora = h;
        minuto = m;
        segundo = s;
    } // fin de if
    else 
        throw invalid_argument(
            "Hora, minuto y/o segundo estaban fuera de rango"    );
} // fin de la funcion establecerTiempo

// imprime el Tiempo en formato de hora univeral (HH:MM:SS)
void Tiempo::imprimirUniversal() const
{
    cout << setfill( '0' ) << setw( 2 ) << hora << ":"
    << setw( 2 ) << minuto << ":" << setw( 2 ) << segundo;
} // fin de la funcion imprimirUniversal

// imprime el Tiempo en formato de hora estandar (HH:MM:SS AM o PM)
void Tiempo::imprimirEstandar() const
{
    cout << ( ( hora == 0 || hora == 12 ) ? 12 : hora % 12 ) << ":"
    << setfill( '0' ) << setw( 2 ) << minuto << ":" << setw( 2 )
    << segundo << ( hora < 12 ? " AM": " PM");
} // fin de la funcion imprimirEstander