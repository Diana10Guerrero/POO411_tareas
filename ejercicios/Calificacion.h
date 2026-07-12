#pragma once
#include <iostream>

class Calificacion {
private:
    Estudiante estudiante;
    Profesor profesor;
    Materia materia;
    float nota;

public:
    Calificacion(Estudiante e, Profesor p, Materia m, float n)
        : estudiante(e), profesor(p), materia(m), nota(n) {}

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
