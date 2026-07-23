#include "Calificacion1.h"
#include <iostream>
#include <fstream>

// Constructor usando punteros (estilo del maestro)
Calificacion::Calificacion(Estudiante _estudiante,
                           Profesor _profesor,
                           Materia _materia,
                           float _nota)
{
    Estudiante *pEstudiante = &_estudiante;
    Profesor   *pProfesor   = &_profesor;
    Materia    *pMateria    = &_materia;
    float      *pNota       = &_nota;

    estudiante = *pEstudiante;
    profesor   = *pProfesor;
    materia    = *pMateria;
    nota       = *pNota;
}

Calificacion::Calificacion(const Calificacion& otro)
{
    Estudiante *pEstudiante = new Estudiante(otro.estudiante);
    Profesor   *pProfesor   = new Profesor(otro.profesor);
    Materia    *pMateria    = new Materia(otro.materia);
    float      *pNota       = new float(otro.nota);

    estudiante = *pEstudiante;
    profesor   = *pProfesor;
    materia    = *pMateria;
    nota       = *pNota;

    delete pEstudiante;
    delete pProfesor;
    delete pMateria;
    delete pNota;
}

// Método para mostrar información de la calificación (con punteros)
void Calificacion::mostrar() const
{
    Estudiante *pEstudiante = const_cast<Estudiante*>(&estudiante);
    Profesor   *pProfesor   = const_cast<Profesor*>(&profesor);
    Materia    *pMateria    = const_cast<Materia*>(&materia);
    float      *pNota       = const_cast<float*>(&nota);

    std::cout << "----- CALIFICACIÓN -----\n";

    // Usamos los métodos de cada objeto
    std::cout << "Estudiante: " << pEstudiante->get_Nombre() << "\n";
    std::cout << "Profesor: "   << pProfesor->get_nombre()   << "\n";
    std::cout << "Materia: "    << pMateria->get_nombre()    << "\n";
    std::cout << "Nota: "       << *pNota                    << "\n";
}

// Método para guardar información en archivo (con punteros)
void Calificacion::serializar(std::ofstream &archivo)
{
    Estudiante *pEstudiante = &estudiante;
    Profesor   *pProfesor   = &profesor;
    Materia    *pMateria    = &materia;
    float      *pNota       = &nota;

    archivo << pEstudiante->get_Nombre() << "|"
            << pProfesor->get_nombre()   << "|"
            << pMateria->get_nombre()    << "|"
            << *pNota                    << "\n";
}

