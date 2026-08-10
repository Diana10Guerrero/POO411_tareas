#pragma once
#include <string>
#include <memory>
#include "Vehiculo.h"

class Cliente {
private:
    std::string cedula;
    std::string nombre;
    std::string telefono;

public:
    Cliente(const std::string& _cedula,
            const std::string& _nombre,
            const std::string& _telefono);

    std::string getCedula() const;
    std::string getNombre() const;
    std::string getTelefono() const;
};
