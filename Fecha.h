// Fig. 9.17: Fecha.h
// Definicion de la clalse Fecha: las funciones miembro se definen en Fecha.cpp
#ifndef FECHA_H
#define FECHA_H

class Fecha
{
    public:
        static const unsigned int mesesPorAnio = 12; // meses en un ano
        explicit Fecha( int = 1, int = 1, int = 19000 ); // constructor predeterminado
        void imprimir() const; // imprime la fecha en formato mes/dia/ano
        ~Fecha(); // se proporciona para confirama el orden de destruccion
    private:
        unsigned int mes; // 1-12 (Enero-Diciembre)
        unsigned int dia; // 1-31  con base en el mes
        unsigned int anio; // cualquier ano
    
    // funcion utilitaria para comprobar si dia es apropiado para mes y anio
    unsigned int comprobarDia( int ) const;
}; // fin de la clase Fecha

#endif