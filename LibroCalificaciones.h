#include <array>
#include <string>

class LibroCalificaciones
{
public:
    // constates
    static const size_t estudiantes = 10; // número de estudiantes
    static const size_t pruebas = 3;      // número de pruebas

    // el constructor inicializa el nombre del curso y el arreglo de calificaciones
    LibroCalificaciones(const std::string &,
                        std::array < std::array<int, pruebas>, estudiantes> &);
    //explicit LibroCalificaciones( std::string );

    void establecerNombreCurso(const std::string &);
    std::string obtenerNombreCurso() const;
    void mostrarMensaje() const;
    void procesarCalificaciones() const;
    int obtenerMinimo() const;
    int obternerMaximo() const;
    double obtenerPromedio(const std::array<int, pruebas> &) const;
    void imprimirGraficoBarras() const;
    void imprimirCalificaciones() const;
    void recibirCalificaciones();
    void mostrarReporteCalificaciones() const;
    void determinarPromedioClase() const;

    int maximo(int, int, int) const; // determina el máximo de 3 vaalores

private:
    std::string nombreCurso;
    std::array<std::array<int, pruebas>, estudiantes> calificaciones;
    int calificacionMaxima;
    unsigned int aCuenta;
    unsigned int bCuenta;
    unsigned int cCuenta;
    unsigned int dCuenta;
    unsigned int fCuenta;
}; // fin de la clase LibroCalificacines