#pragma once
#include <iostream>
#include <string>
#include <memory>

class Usuario {
private:
    std::string codigo;
    std::string nombre;

public:
    Usuario(const std::string& _codigo, const std::string& _nombre)
        : codigo(_codigo), nombre(_nombre) {}

        : codigo(_codigo), nombre(_nombre) {}
