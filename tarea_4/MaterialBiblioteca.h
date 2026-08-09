#pragma once
#include <string>

class MaterialBiblioteca {
protected:
    int tipo;
    std::string codigo;
    std::string titulo;
    std::string responsable;
    bool disponible;

public:
    MaterialBiblioteca(int _tipo, const std::string& _codigo,
                       const std::string& _titulo,
                       const std::string& _responsable,
                       bool _disponible)
        : tipo(_tipo), codigo(_codigo), titulo(_titulo),
          responsable(_responsable), disponible(_disponible) {}

    virtual void mostrarInfo() const = 0;
};


