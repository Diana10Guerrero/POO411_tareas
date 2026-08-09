#include <iostream>
#include <string>
#include <memory>
#include "MaterialBiblioteca.h"

class Prestamo : public MaterialBiblioteca {
private:
    std::string codigoUsuario;
    std::string codigoMaterial;
    bool disponible;

    std::unique_ptr<Prestamo> prestamoInterno;

public:
    Prestamo(const std::string& usuario,
             const std::string& material)
        : codigoUsuario(usuario),
          codigoMaterial(material),
          disponible(true),
          prestamoInterno(nullptr)
    {}

    void mostrarInfo() const override {
        std::cout << "Prestamo: " << codigoUsuario
                  << " - " << codigoMaterial << std::endl;
    }

    bool estaDisponible() const override {
        return disponible;
    }

    void prestar() override {
        if (disponible) {
            disponible = false;
            std::cout << "Material prestado a: " << codigoUsuario << std::endl;
        } else {
            std::cout << "El material ya está prestado." << std::endl;
        }
    }

    void devolver() override {
        disponible = true;
        std::cout << "Material devuelto por: " << codigoUsuario << std::endl;
    }

    void crearPrestamoInterno(const std::string& usuario,
                              const std::string& material)
    {
        prestamoInterno = std::make_unique<Prestamo>(usuario, material);
    }
};
