
#pragma once
#include <iostream>
#include <string>

class Personaje {
private:
    int vida;     
    int nivel;      
    std::string nombre;

    public:
    Personaje(int _vida, const std::string& _nombre)
        : vida(_vida), nombre(_nombre) {}

    
    virtual void mostrarInfo() const = 0;
    virtual bool estaDisponible() const = 0;
    virtual void prestar() = 0;
    virtual void devolver() = 0;
    virtual ~MaterialBiblioteca() {}
};
