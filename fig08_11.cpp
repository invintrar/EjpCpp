// Fig. 8.11: fig08_11.cpp
// Intento de modificar un apuntador constante a datos no constantes.

int main()
{
    int x, y;

    // ptr es un apuntador constante a un entero que se puede
    // modificar a traves de ptr, pero ptr siempre apunta a la 
    // misma ubicacion de memoria.
    int * const ptr = &x; // el apuntador const se debe inicializar

    *ptr = 7; // se permite: *ptr no es const
    ptr = &y; // error: ptr es const; no se puede asigna a una nueva direccion
} // fin de main