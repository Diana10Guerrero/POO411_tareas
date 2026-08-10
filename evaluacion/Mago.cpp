#include "Mago.h"
#include <iostream>
#include <memory>

Mago::Mago(int _vida, const std::string& _nombre, int _nivel, const std::string& _podermagico)
    : Personaje(_vida, _nombre), nivel(_nivel), podermagico(_podermagico) {}


Mago::Mago(const Mago& otro)
    : Personaje(otro.vida, otro.nombre), nivel(otro.nivel), podermagico(otro.podermagico) {}
{ 
    std::unique_ptr<std::string> pMago = std::make_unique<std::string>(otro.Personaje);
    autor = *pMago;

    std::cout << "Constructor copia de Mago usando unique_ptr\n";
}

void Mago::mostrarInfo() const {
    std::cout << "=== Mago ===\n";
    Personaje::mostrarInfo();
    std::cout << "Nivel: " << nivel << "\n";
    std::cout << "Poder mágico: " << podermagico << "\n";
}
