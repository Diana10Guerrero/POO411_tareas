#pragma once
#include "Vehiculo.h"
#include <string>
#include <memory>

class Automovil : public Vehiculo {
private:
    int puertas;

public:
    Automovil(const std::string& matricula,
              const std::string& marca,
              const std::string& modelo,
              int año,
              double tarifa,
              int _puertas);

    std::string obtenerTipo() const override;
    double calcularTarifaDiaria() const override;
};
