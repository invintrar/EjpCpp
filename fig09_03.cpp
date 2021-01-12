// Fig. 9.3: fig09_03.cpp
// Programa pra probar la clase Tiempo.
// NOTA: Este archo se debe compilar con Tiempo.cpp
#include <iostream>
#include <stdexcept> // para la clase de excepcion invalid_argument
#include "Tiempo.h" // incluye la definicion de la clase tiempo de Tiempo.h
using namespace std;

int main()
{
    Tiempo t; // instancia un objeto t de la clase Tiempo

    // imprime los valores iniciales del objeto Tiempo t
    cout << "El timepo univeral inicial es ";
    t.imprimirUniversal(); // 00:00:00
    cout << "\nEl tiempo univeersal estandar es ";
    t.imprimirEstandar(); //  12:00:00 AM

    t.establecerTiempo( 13, 27, 6 ); // cambia el Tiempo

    // imprime los nuevos valores del objeto t Tiempo
    cout << "\n\nEl tiempo universal despues de establecerTiempo es ";
    t.imprimirUniversal(); // 13:27:06
    cout << "\nEl timepo estandar despues de establecerTiempo es ";
    t.imprimirEstandar(); // 1:27:06 PM

    // intenta establecer el timepo con valores invalidos
    try 
    {
        t.establecerTiempo(99, 99, 99 ); // todos los valores fuera de rango
    } // fin try
    catch ( invalid_argument &e )
    {
        cout << "\n\nExcepcion: " << e.what() << endl;
    } // fin de catch

    // imprime los valores de t despues de especificar valores invalidos
    cout << "\n\nDespues de intentar ajustes invalidos:"
    << "\nTiempo universal: ";
    t.imprimirUniversal(); //13:27:06
    cout << "\nTiempo estandar: ";
    t.imprimirEstandar(); // 1.27.06 PM
    cout << endl;
} // fin de main