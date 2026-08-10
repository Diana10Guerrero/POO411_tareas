#include "Automovil.h"
#include <iostream>
#include <string>
#include <memory>

Automovil::Automovil(const std::string& matricula,
                     const std::string& marca,
                     const std::string& modelo,
                     int año,
                     double tarifa,
                     int _puertas)
    : Vehiculo(matricula, marca, modelo, año, tarifa),
      puertas(_puertas) {}

std::string Automovil::obtenerTipo() const {
    return "Automovil";
}

double Automovil::calcularTarifaDiaria() const {
    return getTarifaBase() + (puertas * 50); // ejemplo
};
