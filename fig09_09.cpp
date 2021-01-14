// Fig. 9.9: fig09_09.cpp
// Orden en el que se llama a los 
// constructores y destructores
#include <iostream>
#include "CrearYDestruir.h" // incluye la definicion de la clase CrearYDestruir
using namespace std;

void crear( void ); // prototipo

CrearYDestruir primero( 1, "(global antes de main)" ); // objeto global

int main()
{
    cout << "\nFUNCIONES MAIN: EMPIEZA LA EJECUCION" << endl;
    CrearYDestruir segundo( 2, "(local automatic in main)" );
    static CrearYDestruir third(3, "(local static en main)" );

    crear(); // llama a la funcion para crear objetos

    cout << "\nFUNCION MAIN: CONTINUA LA EJECUCION" << endl;
    CrearYDestruir cuarto( 4, "(local automatico en main)" );
    cout << "\nFUNCION MAIN: TERMINA LA EJECUCION" << endl;
} // fin de main

// funcion para crear objetos
void crear( void )
{
    cout << "\nFUNCION CREAR: EMPIEZA LA EJECUCION" << endl;
    CrearYDestruir quinto(4, "(local automatico en crear)" );
    static CrearYDestruir sexto( 6, "(local static en crear)" );
    CrearYDestruir septimo( 7, "(local automatic en crear)" );
    cout << "\nFUNCION CREAR: TERMINA LA EJECUCION" << endl;
} // din de la funcion crear