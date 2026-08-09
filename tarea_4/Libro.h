#pragma once
#include <iostream>
#include <string>
#include <memory>
#include "MaterialBiblioteca.h"

class Usuario : public MaterialBiblioteca {
private:
    std::string codigo;
    std::string nombre;

 
    std::unique_ptr<Usuario> usuarioInterno;

public:
    Usuario(const std::string& codigo,
            const std::string& nombre)
        : MaterialBiblioteca(4, codigo, nombre, "N/A", true),
          codigo(codigo),
          nombre(nombre),
          usuarioInterno(nullptr)    
    {}

    void mostrarInfo() const override {
        std::cout << "Usuario: " << codigo
                  << " - " << nombre << std::endl;
    }

 
    void crearUsuarioInterno(const std::string& cod,
                             const std::string& nom)
    {
        usuarioInterno = std::make_unique<Usuario>(cod, nom);
    }
};
