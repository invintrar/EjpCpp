// Fig. 9.8: CrearYDestruir.cpp
// Definiciones de la funciones miembro de CrearYDestruir.
#include <iostream>
#include "CrearYDestruir.h"
using namespace std;

// el constructor establece el numero de ID del objeto y el mensaje descriptivo
CrearYDestruir::CrearYDestruir( int ID, string cadenaMensaje )
    :idObjeto( ID ), mensaje( cadenaMensaje )
{
    cout << "El constructor del objeto " << idObjeto << " se ejecuta "
    << mensaje << endl;
} // fin del constructor de CrearYDestruir

// destructor
CrearYDestruir::~CrearYDestruir()
{
    // imprime nuevo linea para cierta objetos: mejora legibilidad
    cout << ( idObjeto == 1 || idObjeto == 6 ? "\n" : "");

    cout << "El destructor del objeto " << idObjeto << " se ejecuta  "
    << mensaje << endl;
} // fin del destructor ~CrearYDestruir