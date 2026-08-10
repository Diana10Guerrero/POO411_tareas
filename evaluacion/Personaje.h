#pragma once
#include <iostream>
#include <string>


class Personaje {
private:
    int vida;           
    std::string nombre;

    std::unique_ptr<Personaje> personajeInterno;
    
public:
    Personaje(int _vida, const std::string& _nombre)
        : vida(_vida), nombre(_nombre) {}

}       