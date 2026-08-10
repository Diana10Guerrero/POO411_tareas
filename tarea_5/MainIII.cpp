#include <iostream>
#include "SistemaAlquiler.h"

int main() {
    SistemaAlquiler sistema;

    // Cargar datos al iniciar (plantilla)
    sistema.cargarDatos();

    // Ejecutar menú principal
    sistema.menu();

    return 0;
}
