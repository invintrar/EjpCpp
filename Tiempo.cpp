// Fig. 9.5: Tiempo.cpp
// definiciones de las funciones miembro para la clase Tiempo.
#include <iostream>
#include <iomanip>
#include <stdexcept> // para la clase de excepcion invalida_argument
#include "Tiempo.h" // incluye la definicion de la clase Tiempo de Tiempo.h
using namespace std;

// el constructor de Tiempo inicializa cada miembro de datos
Tiempo::Tiempo(int hora, int minuto, int segundo )
{
    establecerTiempo( hora, minuto, segundo); // valida y establece el tiempo
} // fin del constructor de Tiempo

// establece el nuevo valor de Tiempo usando la hora universal 
void Tiempo::establecerTiempo( int h, int m, int s )
{
    establecerHora( h ); // establece el campo private hora
    establecerMinuto( m ); // establece el campo private minuto
    establecerSegundo( s ); // establece el campo private segundo
} // fin de la funcion establecerTiempo

// estable el valor de hora
void Tiempo::establecerHora( int h )
{
    if( h >= 0 && h < 24 )
        hora = h;
    else 
        throw invalid_argument("Hora deve estar entre 0 y 23");
} // fin de la funcion establecerHora

// establece el valor de minuto
void Tiempo::establecerMinuto( int m )
{
    if( m >= 0 && m<60 )
        minuto = m;
    else 
        throw invalid_argument("Minuto debe estar entre 0 y 59");
} // fin de la funcion establecerMinuto

// establece el valor segundo
void Tiempo::establecerSegundo( int s )
{
    if( s >= 0 && s < 60 )
        segundo = s;
    else 
        throw invalid_argument("Segundo debe esta entre 0 y 59");
} // fin de la funcion establecerSegundo

// devuelve el valor de la hora
unsigned int Tiempo::obtenerHora() const
{
    return hora;
} // fin de la funcion obtenerHora

//devuelve el valor del minuto
unsigned Tiempo::obtenerMinuto() const
{
    return minuto;
} // fin de la funcion obtenerMinuto

// devuelve el valor del segundo
unsigned Tiempo::obtenerSegundo() const
{
    return segundo;
} // fin de la funcion obtenerSegundo

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