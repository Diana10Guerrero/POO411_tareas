#include "Estudiante1.h"
#include <iostream>
#include <string>

Estudiante::Estudiante(std::string _nombre, std::string _matricula, std::string _seccion)
{
    std::string *pNombre = new std::string(_nombre);
    std::string *pMatricula = new std::string(_matricula);
    std::string *pSeccion = new std::string(_seccion);

    nombre = *pNombre;
    matricula = *pMatricula;
    seccion = *pSeccion;

    delete pNombre;
    delete pMatricula;
    delete pSeccion;
}

void Estudiante::mostrar()
{
    std::string *pNombre = &nombre;
    std::string *pMatricula = &matricula;
    std::string *pSeccion = &seccion;

    std::cout << "Soy el estudiante: " << *pNombre
              << ", mi matrícula es: " << *pMatricula
              << ", sección: " << *pSeccion << std::endl;
}