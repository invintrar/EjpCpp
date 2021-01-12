// Fig. 8.14: fig08_14.cpp
// Uso del operador sizeof par determinar los tamanos de los tipos de datos estandar.
#include<iostream>
using namespace std;

int main()
{
    char c; // variable de tipo char
    short s; // variable de tipo short
    int i ; // variable de tipo int
    long l ; // variable de tipo long
    long long ll; //variable de tipo long long
    float f; // variable de tipo float
    double d; // variable de tipo double
    long double ld; // variable de tipo long double
    int array[20]; // arreglo integrado de int 
    int *ptr = array; // variable de tipo int *

    cout << "sizeof c " << sizeof (c)
    << "\t sizeof(char) = " << sizeof ( char )
    << "\n sizeof s = " << sizeof ( s )
    << "\t sizeof( short ) = " << sizeof ( char )
    << "\n sizeof i = " << sizeof ( i )
    << "\t sizeof( int ) = " << sizeof ( int )
    << "\n sizeof l = " << sizeof ( l )
    << "\t sizeof( long ) = " << sizeof ( long )
    << "\n sizeof ll = " << sizeof ( ll )
    << "\t sizeof( long long ) = " << sizeof ( long long )
    << "\n sizeof f = " << sizeof ( f )
    << "\t sizeof( float ) = " << sizeof ( float )
    << "\n sizeof d = " << sizeof ( d )
    << "\t sizeof( double ) = " << sizeof ( double )
    << "\n sizeof ld = " << sizeof ( ld )
    << "\t sizeof( long double ) = " << sizeof ( long double )
    << "\n sizeof arreglo = " << sizeof ( array )
    << "\n tamanio arreglo = " << sizeof(array)/sizeof(array[0])
    << "\n sizeof ptr = " << sizeof ( ptr ) << endl;
}