#include <iostream>
#include <string>
#include <memory>
#include "MaterialBiblioteca.h"

class Usuario : public MaterialBiblioteca {
private:
    std::string codigo;
    std::string nombre;
    bool activo;

    std::unique_ptr<Usuario> usuarioInterno;

public:
    Usuario(const std::string& codigo,
            const std::string& nombre)
        : codigo(codigo),
          nombre(nombre),
          activo(true),
          usuarioInterno(nullptr)
    {}

    void mostrarInfo() const override {
        std::cout << "Usuario: " << codigo
                  << " - " << nombre << std::endl;
    }

    bool estaDisponible() const override {
        return activo;
    }

    void prestar() override {
        if (!activo) {
            activo = true;
            std::cout << "Usuario activado: " << nombre << std::endl;
        } else {
            std::cout << "El usuario ya está activo." << std::endl;
        }
    }

    void devolver() override {
        activo = false;
        std::cout << "Usuario desactivado: " << nombre << std::endl;
    }

    void crearUsuarioInterno(const std::string& cod,
                             const std::string& nom)
    {
        usuarioInterno = std::make_unique<Usuario>(cod, nom);
    }
};
