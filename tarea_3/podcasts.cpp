#include "Podcasts.h"
#include <iostream>
#include <memory>

Podcasts::Podcasts(const std::string& _titulo,
                   const std::string& _presentador)
    : Audio(2, _titulo), presentador(_presentador) {}

Podcasts::Podcasts(const Podcasts& otro)
    : Audio(otro.tipo, otro.titulo)
{
    std::unique_ptr<std::string> pPresentador = std::make_unique<std::string>(otro.presentador);
    presentador = *pPresentador;

    std::cout << "Constructor copia de Podcasts usando unique_ptr\n";
}

void Podcasts::mostrarInfo() const {
    std::cout << "=== Podcast ===\n";
    Audio::mostrarInfo();
    std::cout << "Presentador: " << presentador << "\n";
}
