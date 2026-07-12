// plantilla de materia
#pragma once
#include <iostream>
#include <fstream>
#include <string>

class Materia {
private:
    std::string nombre;
    float codigo;
    float creditos;

public:
    // Constructor
    Materia(std::string _nombre, float _codigo, float _creditos);
    void mostrar_info();
    std::string get_nombre() { return nombre; }
    float get_codigo() { return codigo; }
    float get_creditos() { return creditos; }
    std::string serializar() {
        return "Nombre: " + nombre +
               "\nCodigo: " + std::to_string(codigo) +
               "\nCreditos: " + std::to_string(creditos) + "\n";
    }
};