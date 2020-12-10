#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int numero1 = 0;
    int numero2 = 0;

    cout << "Escriba dos enteros a coparar: ";
    cin >> numero1 >> numero2;

    if( numero1 == numero2)
        cout << numero1 << " == " << numero2 << endl;
    if (numero1 != numero2 )
        cout << numero1 << " != " << numero2 << endl;
    if (numero1 < numero2 )
        cout << numero1 << " < " << numero2 << endl;
    if (numero1 > numero2 )
        cout << numero1 << " > " << numero2 << endl;
    if (numero1 <= numero2 )
        cout << numero1 << " <= " << numero2 << endl;
    if (numero1 >= numero2 )
        cout << numero1 << " >= " << numero2 << endl;
    
}
