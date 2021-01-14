// Fig. 9.1: Tiempo.h
// Clase Tiempo que contiene un contructor con argumentos predeterminados.
// Las funciones miembro estan definidas en Tiempo.cpp

// evita multiples inclusion del encabezado
#ifndef TIEMPO_H
#define TIEMPO_H

// definicion de la clase Tiempo
class Tiempo
{
    public:
        explicit Tiempo( int = 0, int = 0, int = 0); // constructor predeterminado

        // funciones "establecer"
        void establecerTiempo( int, int, int ); // establece hora, minuto y segundo
        void establecerHora( int ); // establece la hora ( despues de la validacion )
        void establecerMinuto( int ); // establece el minuto ( despues de la validacion )
        void establecerSegundo( int ); // estable el segundo ( despues de la validacion )

        // funciones "obtener"
        unsigned int obtenerHora() const; // devuelve la hora
        unsigned int obtenerMinuto() const; // devuelve el minuto
        unsigned int obtenerSegundo() const; // devuelve el segundo 

        void imprimirUniversal() const; // imprime la hora en formato universal
        void imprimirEstandar() const; // imprime la hora en formato estandar
    private:
        unsigned int hora; // 0 - 23 ( formato de reloj de 24 horas )
        unsigned int minuto; // 0 - 59 
        unsigned int segundo; // 0 - 59
}; // fin de la clase Tiempo

#endif