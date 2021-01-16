// Fig. 9.16 fi09_16.cpp
#include <iostream>
#include "Tiempo.h" // incluye la definicion de la clase Tiempo
using namespace std;

int main()
{
    Tiempo despertar( 6, 45, 0); // objeto no constante
    const Tiempo mediodia( 12, 0, 0 ); // objeto constante

                                        //  OBJERO FUNCION MIEMBRO
despertar.establecerHora( 19 ); // no const no const

despertar.obtenerHora(); // no const const

mediodia.obtenerMinuto(); // const const
mediodia.imprimirUniversal(); // const no const
cout << endl;
despertar.imprimirEstandar();
} // fin de main