#include <iostream>
using namespace std;

int main()
{
    //inicialización de las variables en las declaraciones
    unsigned int aprobados = 0;// número de aprobados
    unsigned int reprobados = 0; //número de reprobados
    unsigned int contadorEstudiantes = 1; // contador de estudiantes

    while ( contadorEstudiantes <= 10)
    {
        //pide datos de entrada y obtiene el valor del usuario
        cout << "Escriba el resultado(1 = aprobado, 2 = reprobado): ";
        int resultado = 0;
        cin >> resultado; // recibe como entrada el resultado

        // if...else anidado en la instrucción  while
        if( resultado == 1)
            aprobados += 1;
        else 
            reprobados += 1;
        contadorEstudiantes += 1;
        
    } // fin while

    cout << "Aprobados " << aprobados << "\nReprobados " << reprobados << endl;

    if( aprobados > 8 )
        cout << "Bono par el instructor" << endl;
    
}