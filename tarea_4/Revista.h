#pragma once
#include <iostream>
#include <memory>
#include <string>
#include "MaterialBiblioteca.h"

class Revista : public MaterialBiblioteca {
private:
    std::string codigo;
    std::string titulo;
    std::string editorial;

     
    std::unique_ptr<Revista> revistaInterna;

public:
    Revista(const std::string& codigo,
            const std::string& titulo,
            const std::string& editorial)
        : MaterialBiblioteca(2, codigo, titulo, editorial, true),
          codigo(codigo),
          titulo(titulo),
          editorial(editorial),
          revistaInterna(nullptr)   
    {}

    void mostrarInfo() const override {
        std::cout << "Revista: " << codigo
                  << " - " << titulo
                  << " - " << editorial << std::endl;
    }

    
    void crearRevistaInterna(const std::string& codigo,
                             const std::string& titulo,
                             const std::string& editorial)
    {
        revistaInterna = std::make_unique<Revista>(codigo, titulo, editorial);
    }
};
