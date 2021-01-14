// Fig. 9.6: fig09_06.cpp
// Constructor con argumetos predeterminados.
#include <iostream>
#include <stdexcept>
#include "Tiempo.h" // incluye la defincion de la clase Tiempo de Tiempo.h
using namespace std;

int main()
{
    Tiempo t1; // valor predeterminado en todos los argumentos
    Tiempo t2( 2 ); // se especifica hora; valores predeterminados para minut y segundo
    Tiempo t3( 21, 34 ); // se especifica hora y minuto; valor predeterminado para segundo
    Tiempo t4( 12, 25, 42); // se especifica hora, minuto y segundo

    cout << "Se construyo con:\n\nt1: todos los argumentos predeterminados\n ";
    t1.imprimirUniversal(); // 00:00:00
    cout << "\n ";
    t1.imprimirEstandar(); // 12:00:00 AM

    cout << "\n\nt2: se especifico hora: minuto y segundo predeterminados\n ";
    t2.imprimirUniversal(); // 02:00:00 
    cout << "\n ";
    t2.imprimirEstandar(); // 2:00:00 AM

    cout << "\n\nt3: se especifica hora y minuto; segunod predeterminado\n";
    t3.imprimirUniversal(); // 21:34:00
    cout << "\n ";
    t3.imprimirEstandar(); // 9:34:00 PM
    cout << "\n\nt4: se especifica hora, minuto y segundo\n ";
    t4.imprimirUniversal(); // 12:25:42
    cout << "\n ";
    t4.imprimirEstandar(); // 12:25:42 PM

    // intenta inicializar t6 con valores invalidos
    try 
    {
        Tiempo t5( 27, 74, 99 ); // se especifican valores incorrectos
    } // fin de try
    catch (invalid_argument &e) 
    {
        cerr << "\n\nExcepcion al inicailiza t5 " << e.what() << endl;
    } // fin catch
} // fin de main