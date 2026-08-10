#pragma once
#include <string>
#include <vector>
#include <memory>

#include "Vehiculo.h"
#include "Automovil.h"
#include "Motocicleta.h"
#include "Cliente.h"
#include "Alquiler.h"

class SistemaAlquiler {
private:
    // Colecciones principales
    std::vector<Cliente> clientes;
    std::vector<std::unique_ptr<Vehiculo>> vehiculos;
    std::vector<Alquiler> alquileres;

public:
    SistemaAlquiler();

    // --- Registro de entidades ---
    void registrarCliente();
    void registrarAutomovil();
    void registrarMotocicleta();

    // --- Visualización ---
    void verClientes() const;
    void verVehiculos() const;
    void verAlquileresActivos() const;
    void verHistorial() const;

    // --- Alquileres ---
    void registrarAlquiler();
    void registrarDevolucion();

    // --- Persistencia ---
    void guardarDatos();
    void cargarDatos();

    // --- Menú principal ---
    void menu();
};
