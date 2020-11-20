#include <iostream>
#include <iomanip> //manipaladores de flujo parametrizados
#include "LibroCalificaciones.h"

using namespace std;

LibroCalificaciones::LibroCalificaciones(const string &nombre,
                                        std::array<std::array<int, pruebas>, estudiantes> &arregloCalificaciones) : nombreCurso(nombre), calificaciones(arregloCalificaciones)
{
} // din del constructor de LibroCalificaciones con dos argumento

// función par establece el nombre del curso
void LibroCalificaciones::establecerNombreCurso(const string &nombre)
{
    if (nombre.size() <= 25)
        nombreCurso = nombre;
    else
    {
        nombreCurso = nombre.substr(0, 25);

        cerr << "El nombre \"" << nombre << "\"excede la longitud maxima (25).\n"
            << "Se limito nombreCurso a los primeros 25 caracteres.\n"
            << endl;
    }
} // fin de la función establecerNombreCurso

// funcion para obtener el nombre del curso
string LibroCalificaciones::obtenerNombreCurso() const
{
    return nombreCurso;
}

void LibroCalificaciones::mostrarMensaje() const
{
    cout << "Bienvenido al libro de calificaciones para \n"
        << obtenerNombreCurso() << "!"
        << endl;
}

void LibroCalificaciones::procesarCalificaciones() const {
    imprimirCalificaciones();

    cout << "\nLa calificacion mas baja en el libro de calificaciones es "
    << obtenerMinimo()
    << "\nLa calificacion mas alta en el libro de calificaciones es "
    << obternerMaximo() << endl;

    imprimirGraficoBarras();
}

int LibroCalificaciones::obtenerMinimo() const
{
    int calificacionInf = 100;

    for( auto const &estudiante: calificaciones)
    {
        for(auto const &calificacion: estudiante)
        {
            if(calificacion < calificacionInf)
                calificacionInf = calificacion;
        }
    }

    return calificacionInf;
}

int LibroCalificaciones::obternerMaximo() const 
{
    int calificacionSup = 0;

    for( auto const &estudiante : calificaciones)
    {
        for (auto const &calificacion : estudiante)
        {
            if(calificacion > calificacionSup)
                calificacionSup = calificacion;
        }
    }

    return calificacionSup;
}

double LibroCalificaciones::obtenerPromedio(const array<int, pruebas> & conjuntoDeCalificaciones) const 
{
    int total = 0;
    
    for( int calificacion : conjuntoDeCalificaciones)
        total += calificacion;
    
    return static_cast<double>(total)/ conjuntoDeCalificaciones.size();
}


void LibroCalificaciones::imprimirGraficoBarras() const
{
    cout << "\nDistribucion general de calificaciones:" << endl;

    const size_t tamanioFrecuencia = 11;
    array< unsigned int, tamanioFrecuencia > frecuencia = {};

    for( auto const &estudiante : calificaciones)
        for( auto const &prueba : estudiante)
            ++frecuencia[prueba/10];
    
    for( size_t cuenta = 0; cuenta < tamanioFrecuencia; ++cuenta)
    {
        if( 0 == cuenta)
            cout << " 0-9: ";
        else if ( 10 == cuenta )
            cout << " 100: ";
        else
            cout << cuenta * 10 << "-" << ( cuenta * 10) + 9 << ": ";
        
        for( unsigned int estrellas = 0; estrellas < frecuencia[ cuenta]; estrellas++)
            cout << '*';

        cout << endl;
    }
}


void LibroCalificaciones::imprimirCalificaciones() const 
{
    cout << "\nLas calificones son:\n\n";
    cout << "          ";

    for( size_t prueba = 0; prueba < pruebas; ++prueba)
        cout << "Prueba " << prueba + 1 << " ";

    cout << "Promedio" << endl;

    for ( size_t estudiante = 0; estudiante < calificaciones.size(); ++estudiante )
    {
        cout << "Estudiante " << setw(2) << estudiante + 1;

        for( size_t prueba = 0; prueba < calificaciones[estudiante].size(); ++prueba)
            cout << setw(8) << calificaciones[ estudiante][ prueba];

        double promedio = obtenerPromedio( calificaciones[estudiante]);
        cout << setw(9) << setprecision(2) << fixed << promedio << endl;
    }
}


void LibroCalificaciones::recibirCalificaciones()
{
    int calificacion1;
    int calificacion2;
    int calificacion3;

    cout << "Introduzca tres calificaciones enteras: ";
    cin >> calificacion1 >> calificacion2 >> calificacion3;

    calificacionMaxima = maximo(calificacion1, calificacion2, calificacion3);
}

int LibroCalificaciones::maximo(int x, int y, int z) const
{
    int valorMaximo = x;

    if (y > valorMaximo)
        valorMaximo = y;

    if (z > valorMaximo)
        valorMaximo = z;

    return valorMaximo;
}

void LibroCalificaciones::mostrarReporteCalificaciones() const
{
    cout << "Calificacion maxima introducida: " << calificacionMaxima << endl;
}

void LibroCalificaciones::determinarPromedioClase() const
{
    //fase de inicialización
    int total = 0;
    unsigned int contadorCalif = 0;

    //fase de procesamiento
    //pide la entrada y lee la calificación del usuario
    cout << "Escriba la calificacion o -1 para salir: ";
    int calificacion = 0;
    cin >> calificacion;

    //itera hasta leer el valor centinela del usuario
    while (calificacion != -1)
    {
        total = total + calificacion;
        contadorCalif += 1;

        //pide la entrada y lee la siguiente calificación del usuario
        cout << "Escriba la calificaion o -1 para salir: ";
        cin >> calificacion;
    } //fin while

    if (contadorCalif != 0) // si el usuario introdujo al menos una calificacio...
    {
        double promedio = static_cast<double>(total) / contadorCalif;

        cout << "\nEl total de las " << contadorCalif << " calificaciones introducidas es "
             << total << endl;
        cout << setprecision(2) << fixed;
        cout << "El promedio de la clase es " << promedio << endl;
    } //fin if
    else
        cout << "No se introdujeron calificaciones" << endl;
}
