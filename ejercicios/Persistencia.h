#pragma once
#include <iostream>
#include <string>

class Persistencia
{

private:

    std::string archivoEstudiantes;
    std::string archivoProfesores;
    std::string archivoMaterias;
    std::string archivoCalificaciones;


public:

    Persistencia();


    void guardarEstudiantes();

    void guardarProfesores();

    void guardarMaterias();

    void guardarCalificaciones();


    void cargarEstudiantes();

    void cargarProfesores();

    void cargarMaterias();

    void cargarCalificaciones();

};

