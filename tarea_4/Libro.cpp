#include <iostream>
#include <string>
#include <memory>
#include "MaterialBiblioteca.h"

class Libro : public MaterialBiblioteca {
private:
    std::string autor;

public:
    Libro(int tipo,
          const std::string& codigo,
          const std::string& titulo,
          const std::string& responsable,
          bool disponible,
          const std::string& autor)
        : MaterialBiblioteca(tipo, codigo, titulo, responsable, disponible),
          autor(autor)
    {}

    void mostrarInfo() const override {
        std::cout << "Libro: " << codigo
                  << " - " << titulo
                  << " - " << autor << std::endl;
    }
};

