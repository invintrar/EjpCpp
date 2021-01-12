// Fig. 8.13: fig08_13.cpp
// Al aplicar el operador sizeof al nombre  de un arreglo integrado
// se devuelve el numero de bytes en el arreglo integrado
#include <iostream>
using namespace std;

size_t getSize( double * ); // prototipo

int main()
{
    double numeros[20]; // 20 valores double; ocupa 160 bytes en nuestro sistema

    cout << "El numero de bytes en el arreglo es " << sizeof( numeros );

    cout << "\nel numero de bytes devueltos por getSize es " << getSize(numeros) << endl;

}// fin de main

// devuelve el tamanio de ptr
size_t getSize( double *ptr )
{
    return sizeof( ptr );
} // fin de la funcion getSize