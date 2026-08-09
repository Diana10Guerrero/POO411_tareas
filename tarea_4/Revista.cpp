#include <iostream>
#include <string>
#include <memory>
#include "MaterialBiblioteca.h"

class Revista : public MaterialBiblioteca {
private:
    std::string codigo;
    std::string titulo;
    std::string editorial;
    bool disponible;

    std::unique_ptr<Revista> revistaInterna;

public:
    Revista(const std::string& codigo,
            const std::string& titulo,
            const std::string& editorial)
        : codigo(codigo),
          titulo(titulo),
          editorial(editorial),
          disponible(true),
          revistaInterna(nullptr)
    {}

    void mostrarInfo() const override {
        std::cout << "Revista: " << codigo
                  << " - " << titulo
                  << " - " << editorial << std::endl;
    }

    bool estaDisponible() const override {
        return disponible;
    }

    void prestar() override {
        if (disponible) {
            disponible = false;
            std::cout << "Revista prestada: " << titulo << std::endl;
        } else {
            std::cout << "La revista ya está prestada." << std::endl;
        }
    }

    void devolver() override {
        disponible = true;
        std::cout << "Revista devuelta: " << titulo << std::endl;
    }

    void crearRevistaInterna(const std::string& cod,
                             const std::string& tit,
                             const std::string& edit)
    {
        revistaInterna = std::make_unique<Revista>(cod, tit, edit);
    }
};
