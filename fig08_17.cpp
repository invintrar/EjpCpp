// Fig. 8.17: fig08_17.cpp
// Uso de notaciones de subindice y apuntador con arreglos integrados.
#include <iostream>
using namespace std;

int main()
{
    int b[] = { 10, 20, 30, 40}; // crea el arreglo integrado b de 4 elementos 
    int *bPtr = b; // establece  bPtr para que apunte al arreglo integrado b

    // imprime el arreglo integrad b usando la notacion de subindice de arreglo
    cout << "Se imprime el arreglo b con: \n\nNotacion de subinde de arreglo\n";

    for ( size_t i = 0; i < 4; ++i)
        cout << "b[" << i << "] = " << b[ i ] << "\n";

    // imprime el arreglo integrado b usando el nombre del arreglo y la notacion apuntador/desplazamiento
    cout << "\nNotacion apuntador/desplazamiento en done "
    << "el apuntador es el nombre del arreglo\n";

    for (size_t desplazamiento1 = 0; desplazamiento1 < 4; ++desplazamiento1 )
        cout << "*(b + " << desplazamiento1 << ") = " << *( b + desplazamiento1) << "\n";
    
    // imprime el arreglo integrando b usando bPtr y la notacion de subindice de arreglo
    cout << "\nNotacion de subindece dea puntador\n";

    for( size_t j = 0; j < 4; ++j )
        cout << "bPtr[" << j << "] = " << bPtr[ j ] << "\n";

    cout << "\nNotacion apuntador/desplazamiento\n";

    // imprime el arreglo integrado b usando bPtr y la notacion apuntador/desplazamiento
    for ( size_t desplazamienot2 = 0; desplazamienot2 < 4; ++desplazamienot2 )
        cout << "*(bPtr + " << desplazamienot2 << ") = " << *(bPtr + desplazamienot2 ) << "\n";

} // fin de main