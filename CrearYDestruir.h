// Fig. 9.7: CrearYDestruir.h
// Definicion de la clase CrearYDestruir
// Las funciones miembro se define en CrearYDestruir.cpp
#include <string>
using namespace std;

#ifndef CREAR_H
#define CREAR_H

class CrearYDestruir
{
public:
    CrearYDestruir( int, string ); // constructor
    ~CrearYDestruir(); // destructor
private:
    int idObjeto; // numero de ID para el objeto
    string mensaje; // mensaje que describe al objeto
}; // fin de la clase CrearYDestruir

#endif