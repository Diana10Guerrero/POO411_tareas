#include "Vehiculo.h"
#include <iostream>
#include <string>
#include <memory>

Vehiculo::Vehiculo(const std::string& _matricula,
                   const std::string& _marca,
                   const std::string& _modelo,
                   int _año,
                   double _tarifa)
    : matricula(_matricula),
      marca(_marca),
      modelo(_modelo),
      año(_año),
      tarifaDiaria(_tarifa),
      disponible(true) {}

std::string Vehiculo::getMatricula() const { return matricula; }
std::string Vehiculo::getMarca() const { return marca; }
std::string Vehiculo::getModelo() const { return modelo; }
int Vehiculo::getAño() const { return año; }
bool Vehiculo::estaDisponible() const { return disponible; }
double Vehiculo::getTarifaBase() const { return tarifaDiaria; }

void Vehiculo::setDisponible(bool estado) {
    disponible = estado;
};
