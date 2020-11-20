#include <iostream>

int main(){
    float numero1 = 0;
    float numero2 = 0;
    float suma = 0;

    std::cout << "Escriba el primer entero: ";
    std::cin >> numero1;

    std::cout << "Escriva el segundo entero: ";
    std::cin >> numero2;

    suma = numero1 + numero2;

    std::cout << "La suma es " << suma << std::endl;

}