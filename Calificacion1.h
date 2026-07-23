#pragma once
#include <iostream>
#include "Estudiante1.h"
#include "Profesor1.h"
#include "Materia1.h"

class Calificacion {
private:
    Estudiante estudiante;
    Profesor profesor;
    Materia materia;
    float nota;

public:
    // Constructor 
    Calificacion(const Estudiante& e, const Profesor& p, const Materia& m, float n)
        : estudiante(e), profesor(p), materia(m), nota(n) {}

        Calificacion(const Calificacion& otro)
        : estudiante(otro.estudiante),
          profesor(otro.profesor),
          materia(otro.materia),
          nota(otro.nota) {}

    // GETTERS CORRECTOS (const)
    Estudiante getEstudiante() const { return estudiante; }
    Profesor getProfesor() const { return profesor; }
    Materia getMateria() const { return materia; }
    float getNota() const { return nota; }

    void mostrar() const {
        std::cout << "Estudiante: " << estudiante.get_Nombre() << "\n";
        std::cout << "Profesor: " << profesor.get_nombre() << "\n";
        std::cout << "Materia: " << materia.get_nombre() << "\n";
        std::cout << "Nota: " << nota << "\n";
    }
};
// Prueba de cambios para el pull request
