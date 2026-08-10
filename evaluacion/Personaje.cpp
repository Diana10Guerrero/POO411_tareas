#include "Personaje.h"
#include <iostream>
#include <memory>

Personaje::Personaje(int _vida, const std::string& _nombre)
    : vida(_vida), nombre(_nombre) {}


Personaje::Personaje(const personaje& otro)
    : personaje(otro.tipo, otro.nombre, otro.vida) {}
{ 
    std::unique_ptr<std::string> pPersonaje = std::make_unique<std::string>(otro.Personaje);
    autor = *pPersonajer;

    std::cout << "Constructor copia de Personaje usando unique_ptr\n";
}

void Personaje::mostrarInfo() const {
    std::cout << "=== Personaje ===\n";
    std::cout << "Nombre: " << nombre << "\n";
    std::cout << "Vida: " << vida << "\n";
}
