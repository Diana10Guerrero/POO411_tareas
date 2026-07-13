#pragma once
#include <iostream>

// Esta es la plantilla de la clase Estudiante, que contiene los atributos y metodos de la clase.

class Estudiante {
private: // Atributos privados de la clase Estudiante
    std::string nombre;
    std::string matricula;
    float seccion;

public: // Constructores y metodos publicos de la clase Estudiante
    Estudiante(std::string _nombre, std::string _matricula, float _seccion);

    // metodo para mostrar la informacion del estudiante
    void mostrar(); 

    std::string get_Nombre() { return nombre; } 
    std::string get_Matricula() { return matricula; } 
    float get_Seccion() { return seccion; } 

    void serializar(std::ofstream & archivo); 

};