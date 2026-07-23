#pragma once
#include <iostream>
#include <string>
#include <fstream>

class Estudiante {
private:
    std::string nombre;
    std::string matricula;
    std::string seccion;

public:

    // Constructor de copia 
    Estudiante(const Estudiante& otro)
    {
        std::string *pNombre = new std::string(otro.nombre);
        std::string *pMatricula = new std::string(otro.matricula);
        std::string *pSeccion = new std::string(otro.seccion);

        nombre = *pNombre;
        matricula = *pMatricula;
        seccion = *pSeccion;

        delete pNombre;
        delete pMatricula;
        delete pSeccion;
    }

    // Mostrar información del estudiante
    void mostrar() const {
        std::cout << "Nombre: " << nombre << "\n";
        std::cout << "Matrícula: " << matricula << "\n";
        std::cout << "Sección: " << seccion << "\n";
    }

    std::string get_Nombre() const { return nombre; }
    std::string get_Matricula() const { return matricula; }
    std::string get_Seccion() const { return seccion; }

    void serializar(std::ofstream &archivo) {
        archivo << nombre << "|" << matricula << "|" << seccion << "\n";
    }
};
