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
    Materia(const std::string& _nombre, float _codigo, float _creditos)
        : nombre(_nombre), codigo(_codigo), creditos(_creditos) {}

         Materia(const Materia& otro)
    {
        std::string *pNombre = new std::string(otro.nombre);
        float *pCodigo = new float(otro.codigo);
        float *pCreditos = new float(otro.creditos);

        nombre = *pNombre;
        codigo = *pCodigo;
        creditos = *pCreditos;

        delete pNombre;
        delete pCodigo;
        delete pCreditos;
    }

    // Mostrar información de la materia
    void mostrar_info() const {
        std::cout << "Materia: " << nombre << "\n";
        std::cout << "Código: " << codigo << "\n";
        std::cout << "Créditos: " << creditos << "\n";
    }

    // Getters y const
    std::string get_nombre() const { return nombre; }
    float get_codigo() const { return codigo; }
    float get_creditos() const { return creditos; }

    // Serializar como texto
    std::string serializar() const {
        return "Nombre: " + nombre +
               "\nCodigo: " + std::to_string(codigo) +
               "\nCreditos: " + std::to_string(creditos) + "\n";
    }

    // Serializar en archivo (compatibilidad con Persistencia)
    void serializar(std::ofstream &archivo) const {
        archivo << nombre << "|" << codigo << "|" << creditos << "\n";
    }
};
