// Incluyo plantilla de Calificacion
#include "Calificacion1.h"
#include "Estudiante1.h"
#include "Profesor1.h"
#include "Materia1.h"
#include <iostream>
#include <fstream>

// Defino constructor de Calificacion
Calificacion::Calificacion(Estudiante _estudiante, Profesor _profesor, Materia _materia, float _nota)
{
    Estudiante *pEstudiante = &_estudiante;
    Profesor *pProfesor = &_profesor;
    Materia *pMateria = &_materia;
    float *pNota = &_nota;

    estudiante = *pEstudiante;
    profesor = *pProfesor;
    materia = *pMateria;
    nota = *pNota;
}

// Método para mostrar información de la calificación
void Calificacion::mostrar()
{
    Estudiante *pEstudiante = &estudiante;
    Profesor *pProfesor = &profesor;
    float *pNota = &nota;

    std::cout << "-----CALIFICACIÓN -----\n";

    pEstudiante->mostrar();
    pProfesor->mostrar();

    std::cout << "Nota: " << *pNota << "\n";
}

// Método para guardar información en archivo
void Calificacion::serializar(std::ofstream &archivo)
{
    Estudiante *pEstudiante = &estudiante;
    Profesor *pProfesor = &profesor;
    Materia *pMateria = &materia;
    float *pNota = &nota;

    archivo << pEstudiante->get_nombre() << "|"
            << pProfesor->get_nombre() << "|"
            << pMateria->get_nombre() << "|"
            << *pNota << "\n";
}