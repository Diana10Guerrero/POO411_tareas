#pragma once
#include <iostream>
#include <string>
#include <memory>

class Audio {
protected:
    int tipo;           
    std::string titulo;

public:
    Audio(int _tipo, const std::string& _titulo)
        : tipo(_tipo), titulo(_titulo) {}

    
    Audio(const Audio& otro)
    {
        std::unique_ptr<int> pTipo = std::make_unique<int>(otro.tipo);
        std::unique_ptr<std::string> pTitulo = std::make_unique<std::string>(otro.titulo);

        tipo = *pTipo;
        titulo = *pTitulo;

        std::cout << "Constructor copia de Audio usando unique_ptr\n";
    }

    virtual void mostrarInfo() const {
        std::cout << "Título: " << titulo << "\n";
    }

    int getTipo() const { return tipo; }

    virtual ~Audio() {}
};
