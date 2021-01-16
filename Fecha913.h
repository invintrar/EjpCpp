// Fig. 9.13: Fecha.h
// Declaracion de la clase Fecha. Las funciones miembro se definen en Fecha.cpp

// evita multiples inclusiones del encabezado
#ifndef FECHA_H
#define FECHA_H

// definicion de la clase Fecha
class Fecha
{
    public:
        explicit Fecha( int = 1, int = 1, int = 2000 ); // constructor predeterminado
        void imprimir();
    private:
        unsigned int mes;
        unsigned int dia;
        unsigned int anio;
}; // fin de la clase Fecha

#endif