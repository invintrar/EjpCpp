// Fig. 8.10: fig08_10.cpp
// Intento de modifi los datos a traves de un 
// apuntador no constte a datos constantes.

void f( const int *); // prototipo

int main()
{
    int y = 0;

    f( &y ); // f intentara realizar una modificacion ilegal
} // fin main

// una variable constante no se puede modificar a traves de xPtr
void f( const int *xPtr )
{
    *xPtr = 100; // error: no se puede modificar un objeto const
} // fin de la funcion f