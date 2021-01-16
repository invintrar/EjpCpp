// Fig. 9.15: fig09_15.cpp
// Demuestra que los objetos de una clase se puede asignar
// unos a otros mediante la asignacion predeterminada a nivel de bits.
#include <iostream>
#include "Fecha.h"
using namespace std;

int main()
{
    Fecha fecha1( 7, 4, 2004);
    Fecha fecha2; // el valor predeterminado de fecha2 es 1/1/2000

    cout << "fecha1 = ";
    fecha1.imprimir();
    cout << "\nfecha2 = ";
    fecha2.imprimir();

    fecha2 = fecha1; // asignacion predeterminada a nivel de bits

    cout << "\n\nDespues de la asignacion predeterminada a nivel de bits, fecha2 = ";
    fecha2.imprimir();
    cout << endl;
} // fin main