#include "Motocicleta.h"
#include <iostream>
#include <string>
#include <memory>

Motocicleta::Motocicleta(const std::string& matricula,
                         const std::string& marca,
                         const std::string& modelo,
                         int año,
                         double tarifa,
                         int _cilindrada)
    : Vehiculo(matricula, marca, modelo, año, tarifa),
      cilindrada(_cilindrada) {}

std::string Motocicleta::obtenerTipo() const {
    return "Motocicleta";
}

double Motocicleta::calcularTarifaDiaria() const {
    return getTarifaBase() + (cilindrada * 0.2); // ejemplo
};
