// Fig. 8.6: fig08_06.cpp
// Uso del paso por valor par elevar al cubo el valor de una variable.
#include <iostream>
using namespace std;

int cuboPorValor( int ); // prototipo

int main()
{
    int numero = 5;
    
    cout << "El valor original de numero es " << numero;

    numero = cuboPorValor( numero ); // pasa el numero por valor a cuboPorValor
    cout << "\nEl nuevo valor de numero es " << numero << endl;
} // fin de main

// caldula y devuelve el cubo del argumento entero
int cuboPorValor( int n )
{
    return n*n*n; // eleva al cubo la variable local n y devuelve el resultado 
} // fin de la funcion cuboPorValor