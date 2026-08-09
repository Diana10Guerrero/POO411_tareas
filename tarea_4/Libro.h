#pragma once
#include <iostream>
#include <string>
#include <memory>
#include "MaterialBiblioteca.h"

class Libro : public MaterialBiblioteca {
private:
    std::string codigo;
    std::string titulo;
    std::string autor;
    bool disponible;

    std::unique_ptr<Usuario> usuarioInterno;

public:
    Libro(const std::string& codigo,
          const std::string& titulo,
          const std::string& autor);

    void mostrarInfo() const override;
    bool estaDisponible() const override;
    void prestar() override;
    void devolver() override;
};

    