#include "Guerrero.h"
#include <iostream>
#include <memory>

Guerrero::Guerrero(int _vida, const std::string& _nombre, int _nivel, const std::string& _fuerza)
    : Personaje(_vida, _nombre), nivel(_nivel), fuerza(_fuerza) {}

Guerrero::Guerrero(const Guerrero& otro)
    : Personaje(otro.vida, otro.nombre), nivel(otro.nivel), fuerza(otro.fuerza) {}
{ 
    std::unique_ptr<std::string> pGuerrero = std::make_unique<std::string>(otro.Guerrero);
    autor = *pGuerrero;

    std::cout << "Constructor copia de Guerrero usando unique_ptr\n";
}

void Guerrero::mostrarInfo() const {
    std::cout << "=== Guerrero ===\n";
    Personaje::mostrarInfo();
    std::cout << "Nivel: " << nivel << "\n";
    std::cout << "Fuerza: " << fuerza << "\n";
}
