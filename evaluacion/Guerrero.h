#pragma once
#include <iostream>
#include <string>
#include <memory>
#include "Personaje.h"

class Guerrero : public Personaje {
private:
    std::string nombre;
    int vida;
    int nivel;
    std::string fuerza;

public:
    Guerrero(int _vida, const std::string& _nombre, int _nivel, const std::string& _fuerza)
        : Personaje(_vida, _nombre), nivel(_nivel), fuerza(_fuerza) {}
};
    std::string ;
    bool disponible;

    std::unique_ptr<Personaje> personajeInterno;

public:
 {  
    Guerrero(const std::string& nombre,
              const int vida,
          const int fuerza);

    void mostrarInfo() const override;
    bool fuerza() const override;
    void mostrarDaño() override;
    void defensa() override;
    void atacar() override;
    void d() override;
};