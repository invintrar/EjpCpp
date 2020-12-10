// Fig. 2.25: fig07_25.cpp
// Demostración de la plantilla de clase vector de la Biblioteca estándar de C++
#include <iostream>
#include <iomanip>
#include <vector>
#include <stdexcept>
using namespace std;

void imprimirVector( const vector< int > &); // muestra el vector
void recibirVector( vector< int > & ); // introduce los vectores en el vector

int main()
{
    vector < int > enteros1( 7 ); // vector de 7 elementos < int > 
    vector < int > enteros2( 10 ); // vector de 10 elementos < int >

    // imprime el tamaño y el contenido de enteros1
    cout << "El tamanio del vector enteros 1 es " << enteros1.size() 
    << "\nvector despues de la inicializacion:" << endl;
    imprimirVector(enteros1);

    // imprime el tamaño y el contenidos del enteros2
    cout << "El tamanio del vectore enteros2 es " << enteros2.size()
    << "\nvector despues de la inicializacion:" << endl;
    imprimirVector( enteros2 );

    // recibe e imprime enteros1 y enteros2
    cout << "\nEscribir 17 enteros:" << endl;
    recibirVector( enteros1 );
    recibirVector( enteros2 );

    cout << "\nDespues de la entrada, los vecotres contienen:\n"
    << "enteros1:" << endl;
    imprimirVector( enteros1 );
    cout << "enteros2:" << endl;
    imprimirVector( enteros2 );

    //usa el operador de desigualdad (!=) con objetos vector
    cout << "\nEvaluacion: enteros1 != enteros2" << endl;

    if ( enteros1 != enteros2 )
        cout << "enteros1  y enteros2 no son iguales" << endl;

    // crea el vector enteros3 usando enteros1 como un 
    // inicializador; imprime el tamaño y el contendio
    vector < int > enteros3 ( enteros1 ); // constructor de copia

    cout << "\nEl tamanio del vector enteros3 es " << enteros3.size()
    << "\nvector despues de la inicializacion: " << endl;
    imprimirVector( enteros3 );

    // usa el operador de asignacion (=) sobrecardado
    cout << "\nAsignacion de enteros2  enteros1: " << endl;
    enteros1 = enteros2; // asigna enteros2 a enteros1

    cout << "enteros1:" << endl;
    imprimirVector( enteros1 );
    cout << "enteros2:" << endl;
    imprimirVector( enteros2 );

    // usa el operador de igualdad (==) con objetos vector
    cout << "\nEvaluacion: enteros1 == enteros2" << endl;

    if ( enteros1 == enteros2 )
        cout << "enteros1 y enteros2 son iguales" << endl;
    
    // usa corchetes para asignar el valor en la ubicación 5 com un rvalue
    cout << "\nenteros1[5] es " << enteros1[5] ;

    // usa corchetes para rear lvalure
    cout << "\n\nAsignacion de 1000 a enteros1[5]" << endl;
    enteros1[5] = 1000;
    cout << "enteros1:" << endl;
    imprimirVector( enteros1 );

    // intenta usar subindice fuera de rango 
    try
    {
        cout << "\nIntento de mostrar enteros1.at( 15 )" << endl;
        cout << enteros1.at( 15 ) << endl; // ERROR: fuera de rango
    } // fin de try
    catch(out_of_range &ex)
    {
        cerr << "Ocurrio una excepcionL " <<  ex.what() << endl;
    } // fin de catch

    // cambiar el tamaño de un vector
    cout << "\nEl tamnio actual de enteros3 es: " << enteros3.size() << endl;
    enteros3.push_back( 1000 ); // agrega 1000 al final del vector
    cout << "El tamanio nuevo de enteros3 es:" << enteros3.size() << endl;
    cout << "Ahora enteros3 contiene: ";
    imprimirVector( enteros3 );
} // fin de main

// imprime el contenido del vector
void imprimirVector( const vector< int> &arreglo)
{
    for ( int elemento : arreglo )
        cout << elemento << " ";
    
    cout << endl;
} // fin de la funcion imprimirVector

// recibe el contenido del vector
void recibirVector( vector< int > &arreglo )
{
    for ( int &elemento : arreglo)
        cin >> elemento;
} // fin de la función recibirVector