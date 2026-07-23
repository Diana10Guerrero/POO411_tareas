#pragma once
#include <iostream>
#include <string>
#include <fstream>

// Incluimos las clases que vamos a guardar/cargar
#include "Estudiante1.h"
#include "Profesor1.h"
#include "Materia1.h"
#include "Calificacion1.h"

class Persistencia{
private:

    std::string archivoEstudiantes;
    std::string archivoProfesores;
    std::string archivoMaterias;
    std::string archivoCalificaciones;

    public:
    // Constructor: asignamos nombres de archivos
    Persistencia()
        : archivoEstudiantes("estudiantes.txt"),
          archivoProfesores("profesores.txt"),
          archivoMaterias("materias.txt"),
          archivoCalificaciones("calificaciones.txt")
    {}

    // Métodos de guardado
    void guardarEstudiantes(const std::vector<Estudiante>& lista);
    void guardarProfesores(const std::vector<Profesor>& lista);
    void guardarMaterias(const std::vector<Materia>& lista);
    void guardarCalificaciones(const std::vector<Calificacion>& lista);

    // Métodos de carga
    void cargarEstudiantes(std::vector<Estudiante>& lista);
    void cargarProfesores(std::vector<Profesor>& lista);
    void cargarMaterias(std::vector<Materia>& lista);
    void cargarCalificaciones(std::vector<Calificacion>& lista);
};