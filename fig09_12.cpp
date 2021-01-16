// Fig. 9.12: fig09_12.cpp
// Demostracion de una funcion miembro publica que 
// devuelve una referencia a un miembro de datos privado.
#include <iostream>
#include "Tiempo.h"
using namespace std; 

int main()
{
    Tiempo t; // crea un objeto Tiempo

    // inicializa horaRef con la referencia devuelta por establecerHoraIncorrecta 
    int horaRef = t.establecerHoraIncorrecta( 20 ); // 20 es una hora validad

    cout << "Hora valida antes de la modificacion: " << horaRef;
    horaRef = 30; // usa horaRef para establecer un valor invalido en el objeto Tiempo t
    cout << "\nHora invalida despues de la modificacionL " << t.obtenerHora();

    // Peligro: !La llamada a una funcion que devuleve
    // una referencia se puede usar como un lvalue!
    t.establecerHoraIncorrecta( 12 ) = 74; // asigna otro valor invalido a hora

    cout << "\n\n**********************************************************\n"
    << "MALLA PRACTICA DE PROGRAMACION!!!!!\n"
    << "t.establecerHoraIncorrecta( 12 ) como  un lvalue, hora invalida: "
    << t.obtenerHora()
    << "\n********************************************************************" << endl;
} // fin de main