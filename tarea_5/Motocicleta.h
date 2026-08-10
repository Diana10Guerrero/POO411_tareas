#pragma once
#include "Vehiculo.h"
#include <string>
#include <memory>

class Motocicleta : public Vehiculo {
private:
    int cilindrada;

public:
    Motocicleta(const std::string& matricula,
                const std::string& marca,
                const std::string& modelo,
                int año,
                double tarifa,
                int _cilindrada);

    std::string obtenerTipo() const override;
    double calcularTarifaDiaria() const override;
};
