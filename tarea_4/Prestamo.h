#pragma once
#include <iostream>
#include <memory>
#include <string>
#include "MaterialBiblioteca.h"

class Prestamo : public MaterialBiblioteca {
private:
    std::string codigoUsuario;
    std::string codigoMaterial;

    // PUNTERO  
    std::unique_ptr<Prestamo> prestamoInterno;

public:
    // CONSTRUCTOR
    Prestamo(const std::string& usuario,
             const std::string& material)
        : MaterialBiblioteca(3, material, "Prestamo", usuario, true),
          codigoUsuario(usuario),
          codigoMaterial(material),
          prestamoInterno(nullptr)    
    {}

    // MÉTODO POR HERENCIA
    void mostrarInfo() const override {
        std::cout << "Prestamo: " << codigoUsuario
                  << " - " << codigoMaterial << std::endl;
    }

    // MÉTODO PARA CREAR EL UNIQUE_PTR
    void crearPrestamoInterno(const std::string& usuario,
                              const std::string& material)
    {
        prestamoInterno = std::make_unique<Prestamo>(usuario, material);
    }
};
