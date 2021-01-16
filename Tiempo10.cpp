// Fig. 9.11: Tiempo.cpp
// Definiciones de las funciones miembro de la clase Tiempo.
#include <stdexcept>
#include "Tiempo.h"
using namespace std;

// funcion contructor para inicializar los datos privados: llama a la funcion miembro
// establecerTiempo para establecer las variables; los valores predeterminados son 0 ( vea la definicion de la clase )
Tiempo::Tiempo( int hr, int min, int seg )
{
    establecerTiempo( hr, min, seg );
} // fin del constructor de Tiempo

// establece los valores de hora, minuto y segundo
void Tiempo::establecerTiempo( int h, int m, int s )
{
    // valida hora, minuto y segundo
    if( ( h >= 0 && h < 24 ) && ( m >= 0 && m < 60 ) && 
    ( s >= 0 && s < 60 ) )
    {
        hora = h;
        minuto = m;
        segundo = s;
    } // fin de if
    else 
        throw invalid_argument(
            "hora, minuto y/o segundo estaban fuera de rando" );
} // din de la funcion establecerTiempo

// devuelve el valor de hora
unsigned int Tiempo::obtenerHora()
{
    return hora;
} // fin de la funcion obtenerHora

// mala practica: devolver unara referencia a un miembro de datos privado
unsigned int &Tiempo::establecerHoraIncorrecta( int hh)
{
    if ( hh >= 0 && hh < 24 )
        hora = hh;
    else 
        throw invalid_argument( "hora deve estar entre 0 y 23" );

    return hora; // devolucion de referencia peligrosa
} // fin de la funcion establecerHoraIncorrecta