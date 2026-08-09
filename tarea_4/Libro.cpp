#include "Libro.h"
#include <iostream>
#include <string>
#include <memory>

Libro::Libro(const std::string& codigo,
             const std::string& titulo,
             const std::string& autor)
    : codigo(codigo), titulo(titulo), autor(autor), disponible(true)
{}

void Libro::mostrarInfo() const {
    std::cout << "Libro: " << codigo
              << " - " << titulo
              << " - " << autor << std::endl;
}

bool Libro::estaDisponible() const {
    return disponible;
}

void Libro::prestar() {
    disponible = false;
}

void Libro::devolver() {
    disponible = true;
}
