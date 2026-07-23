#include "Persistencia1.h"
#include <iostream>
#include <fstream>

// Constructor usando punteros (estilo del maestro)
Persistencia::Persistencia()
{
    std::string *pEstudiantes    = new std::string("estudiantes.txt");
    std::string *pProfesores     = new std::string("profesores.txt");
    std::string *pMaterias       = new std::string("materias.txt");
    std::string *pCalificaciones = new std::string("calificaciones.txt");

    archivoEstudiantes    = *pEstudiantes;
    archivoProfesores     = *pProfesores;
    archivoMaterias       = *pMaterias;
    archivoCalificaciones = *pCalificaciones;

    delete pEstudiantes;
    delete pProfesores;
    delete pMaterias;
    delete pCalificaciones;
}

// Guardar estudiantes (punteros)
void Persistencia::guardarEstudiantes()
{
    std::string *pArchivo = &archivoEstudiantes;

    std::ofstream archivo(*pArchivo);

    // Aquí luego se escribirán estudiantes con punteros
    archivo << "Archivo de estudiantes creado.\n";

    archivo.close();
}

// Guardar profesores (punteros)
void Persistencia::guardarProfesores()
{
    std::string *pArchivo = &archivoProfesores;

    std::ofstream archivo(*pArchivo);

    archivo << "Archivo de profesores creado.\n";

    archivo.close();
}

// Guardar materias (punteros)
void Persistencia::guardarMaterias()
{
    std::string *pArchivo = &archivoMaterias;

    std::ofstream archivo(*pArchivo);

    archivo << "Archivo de materias creado.\n";

    archivo.close();
}

// Guardar calificaciones (punteros)
void Persistencia::guardarCalificaciones()
{
    std::string *pArchivo = &archivoCalificaciones;

    std::ofstream archivo(*pArchivo);

    archivo << "Archivo de calificaciones creado.\n";

    archivo.close();
}

// Cargar estudiantes (punteros)
void Persistencia::cargarEstudiantes()
{
    std::string *pArchivo = &archivoEstudiantes;

    std::ifstream archivo(*pArchivo);

    // Aquí luego se leerán estudiantes con punteros

    archivo.close();
}

// Cargar profesores (punteros)
void Persistencia::cargarProfesores()
{
    std::string *pArchivo = &archivoProfesores;

    std::ifstream archivo(*pArchivo);

    archivo.close();
}

// Cargar materias (punteros)
void Persistencia::cargarMaterias()
{
    std::string *pArchivo = &archivoMaterias;

    std::ifstream archivo(*pArchivo);

    archivo.close();
}

// Cargar calificaciones (punteros)
void Persistencia::cargarCalificaciones()
{
    std::string *pArchivo = &archivoCalificaciones;

    std::ifstream archivo(*pArchivo);

    archivo.close();
}