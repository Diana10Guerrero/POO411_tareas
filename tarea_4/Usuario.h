#pragma once
#include <iostream>
#include <string>
#include <memory>

class Usuario {
private:
    std::string codigo;
    std::string nombre;

 
    std::unique_ptr<Usuario> usuarioInterno;

public:
    Usuario(const std::string& _codigo,
            const std::string& _nombre)
        : codigo(_codigo),
          nombre(_nombre),
          usuarioInterno(nullptr)   
    {}

    void mostrarInfo() const {
        std::cout << "Usuario: " << codigo
                  << " - " << nombre << std::endl;
    }

     
    void crearUsuarioInterno(const std::string& cod,
                             const std::string& nom)
    {
        usuarioInterno = std::make_unique<Usuario>(cod, nom);
    }
};
