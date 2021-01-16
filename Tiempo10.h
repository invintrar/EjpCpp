// Fig. 9.10: Tiempo.h
// Declaracion de la clase Tiempo
// Las funciones miembro se definen en Tiempo.cpp

// evita multiples inclusiones del encabezado
#ifndef TIEMPO_H
#define TIEMPO_H

class Tiempo
{
    public:
        explicit Tiempo( int  = 0, int = 0, int = 0 );
        void establecerTiempo( int, int, int );
        unsigned int obtenerHora() ;
        unsigned int &establecerHoraIncorrecta( int ); // devolucion de referencia peligrosa

    private:
        unsigned int hora;
        unsigned int minuto;
        unsigned int segundo;
}; // fin de la clase Tiempo

#endif