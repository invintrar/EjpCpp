// Fig. 8.7: fig08_07.cpp
// Uso del paso por referencia con un argumento apuntador para 
//elevar  al cubo el valor de una variable.
#include <iostream>
using namespace std;

void cuboPorReferencia(int *); // prototipo

int main()
{
    int numero = 2;

    cout << "El valor original de numero es: " << numero;

    cuboPorReferencia( &numero ); // pasa la dirección de número a cuboPorReferencia

    cout << "\nEl nuevo  valor  de numero  es: " << numero << endl;
} // fin de main

// calula el cubo de *nPtr: modifica la variable numero en main
void cuboPorReferencia( int *nPtr )
{
    *nPtr = *nPtr * *nPtr * *nPtr; // eleva *nPtr al cubo
} // fin de la funcion cuboPorReferencia