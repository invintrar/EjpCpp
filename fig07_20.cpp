#include <iostream>
#include <array>

using namespace std;

const size_t filas = 2;
const size_t columnas = 3;

void imprimirArreglo(const array<array<int, columnas>, filas> &);
int main(){
    array<array<int, columnas>, filas> arreglo1 = {1, 2, 3, 4, 5,6,};
    array<array<int, columnas>, filas > arreglo2 = {1, 2, 3, 4, 5};

    cout << "Los valores en el arreglo pr fila son: " << endl;
    imprimirArreglo(arreglo1);

    cout << "\nLos valores en el arreflo por fila son: " << endl;
    imprimirArreglo(arreglo2);
} // fin main

void imprimirArreglo(const array<array<int, columnas>, filas> & a){
    for(auto const&fila:a){
        for(auto const&elemento:fila)
            cout <<elemento<<' ';
        
        cout << endl;
    }
} // fin de la funcion imprimirArreglo