#include "Alquiler.h"
#include <string>
#include <memory>
#include <iostream>

Alquiler::Alquiler(const std::string& _codigo,
                   const std::string& _cedulaCliente,
                   const std::string& _matriculaVehiculo,
                   const std::string& _fechaInicio,
                   int _dias,
                   double _tarifa)
    : codigo(_codigo),
      cedulaCliente(_cedulaCliente),
      matriculaVehiculo(_matriculaVehiculo),
      fechaInicio(_fechaInicio),
      dias(_dias),
      tarifaAplicada(_tarifa),
      activo(true) {}

std::string Alquiler::getCodigo() const { return codigo; }
std::string Alquiler::getCedulaCliente() const { return cedulaCliente; }
std::string Alquiler::getMatriculaVehiculo() const { return matriculaVehiculo; }
bool Alquiler::estaActivo() const { return activo; }

void Alquiler::finalizar() {
    activo = false;
};
