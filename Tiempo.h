// Fig. 9.1: Tiempo.h
// Definicion de la clase Tiempo.
// Las funciones miembro estan definidas en Tiempo.cpp

// evita multiples inclusion del encabezado
#ifndef TIEMPO_H
#define TIEMPO_H

// definicion de la clase Tiempo
class Tiempo
{
    public:
        Tiempo(); // constructor
        void establecerTiempo( int, int, int ); // establece hora, minuto y segundo
        void imprimirUniversal() const; // imprime la hora en formato universal
        void imprimirEstandar() const; // imprime la hora en formato estandar
    private:
        unsigned int hora; // 0 - 23 ( formato de reloj de 24 horas )
        unsigned int minuto; // 0 - 59 
        unsigned int segundo; // 0 - 59
}; // fin de la clase Tiempo

#endif