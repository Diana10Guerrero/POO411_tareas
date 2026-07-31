#include "Canciones.h"
#include <iostream>
#include <memory>

Canciones::Canciones(const std::string& _titulo,
                     const std::string& _autor)
    : Audio(1, _titulo), autor(_autor) {}

Canciones::Canciones(const Canciones& otro)
    : Audio(otro.tipo, otro.titulo)
{
    std::unique_ptr<std::string> pAutor = std::make_unique<std::string>(otro.autor);
    autor = *pAutor;

    std::cout << "Constructor copia de Canciones usando unique_ptr\n";
}

void Canciones::mostrarInfo() const {
    std::cout << "=== Canción ===\n";
    Audio::mostrarInfo();
    std::cout << "Autor: " << autor << "\n";
}
