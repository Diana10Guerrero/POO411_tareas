#pragma once
#include <string>

class Vehiculo {
private:
    std::string matricula;
    std::string marca;
    std::string modelo;
    int año;
    double tarifaDiaria;
    bool disponible;

public:
    Vehiculo(const std::string& _matricula,
             const std::string& _marca,
             const std::string& _modelo,
             int _año,
             double _tarifa);

    virtual ~Vehiculo() {}

    // Métodos abstractos (polimorfismo)
    virtual std::string obtenerTipo() const = 0;
    virtual double calcularTarifaDiaria() const = 0;

    // Getters
    std::string getMatricula() const;
    std::string getMarca() const;
    std::string getModelo() const;
    int getAño() const;
    bool estaDisponible() const;
    double getTarifaBase() const;

    // Setters
    void setDisponible(bool estado);
};
