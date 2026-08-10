#pragma once
#include <iostream>
#include <string>
#include <memory>
#include "Personaje.h"

class Mago : public Personaje {
private:
    std::string nombre;
    int vida;
    std::string podermagico;

public:
    Mago(int _vida, const std::string& _nombre, int _nivel, const std::string& _podermagico)
        : Personaje(_vida, _nombre), nivel(_nivel), podermagico(_podermagico) {}
};
    std::string ;
    bool disponible;

    std::unique_ptr<Personaje> personajeInterno;

public:
    Mago(const std::string& nombre,
          const int vida,
          const int podermagico);

    void mostrarInfo() const override;
    bool podermagico() const override;
    void atacar() override;
    void d() override;
};