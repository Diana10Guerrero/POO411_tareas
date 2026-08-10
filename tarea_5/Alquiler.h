#pragma once
#include <string>
#include <memory>
#include <iostream>

class Alquiler {
private:
    std::string codigo;
    std::string cedulaCliente;
    std::string matriculaVehiculo;
    std::string fechaInicio;
    int dias;
    double tarifaAplicada;
    bool activo;

public:
    Alquiler(const std::string& _codigo,
             const std::string& _cedulaCliente,
             const std::string& _matriculaVehiculo,
             const std::string& _fechaInicio,
             int _dias,
             double _tarifa);

    std::string getCodigo() const;
    std::string getCedulaCliente() const;
    std::string getMatriculaVehiculo() const;
    bool estaActivo() const;

    void finalizar();
};
