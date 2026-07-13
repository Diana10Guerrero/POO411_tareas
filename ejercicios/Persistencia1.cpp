#include "Persistencia.h"
#include <iostream>
#include <fstream>


Persistencia::Persistencia()
{
    std::string *pEstudiantes = new std::string("estudiantes.txt");
    std::string *pProfesores = new std::string("profesores.txt");
    std::string *pMaterias = new std::string("materias.txt");
    std::string *pCalificaciones = new std::string("calificaciones.txt");


    archivoEstudiantes = *pEstudiantes;
    archivoProfesores = *pProfesores;
    archivoMaterias = *pMaterias;
    archivoCalificaciones = *pCalificaciones;


    delete pEstudiantes;
    delete pProfesores;
    delete pMaterias;
    delete pCalificaciones;
}


void Persistencia::guardarEstudiantes()
{
    std::string *pArchivo = &archivoEstudiantes;

    std::ofstream archivo(*pArchivo);

    archivo.close();
}


void Persistencia::guardarProfesores()
{
    std::string *pArchivo = &archivoProfesores;

    std::ofstream archivo(*pArchivo);

    archivo.close();
}


void Persistencia::guardarMaterias()
{
    std::string *pArchivo = &archivoMaterias;

    std::ofstream archivo(*pArchivo);

    archivo.close();
}


void Persistencia::guardarCalificaciones()
{
    std::string *pArchivo = &archivoCalificaciones;

    std::ofstream archivo(*pArchivo);

    archivo.close();
}


void Persistencia::cargarEstudiantes()
{
    std::string *pArchivo = &archivoEstudiantes;

    std::ifstream archivo(*pArchivo);

    archivo.close();
}


void Persistencia::cargarProfesores()
{
    std::string *pArchivo = &archivoProfesores;

    std::ifstream archivo(*pArchivo);

    archivo.close();
}


void Persistencia::cargarMaterias()
{
    std::string *pArchivo = &archivoMaterias;

    std::ifstream archivo(*pArchivo);

    archivo.close();
}


void Persistencia::cargarCalificaciones()
{
    std::string *pArchivo = &archivoCalificaciones;

    std::ifstream archivo(*pArchivo);

    archivo.close();
}