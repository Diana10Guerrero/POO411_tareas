#include "Estudiante.h"
#include <iostream>
#include <string>

Estudiante::Estudiante(std::string _nombre, std::string _matricula, float _seccion)
{
    std::string *pNombre = &_nombre;
    std::string *pMatricula = &_matricula;
    float *pSeccion = &_seccion;

    nombre = *pNombre;
    matricula = *pMatricula;
    seccion = *pSeccion;
}

void Estudiante::mostrar()
{
    std::string *pNombre = &nombre;
    std::string *pMatricula = &matricula;
    float *pSeccion = &seccion;

    std::cout << "Soy el estudiante: " << *pNombre
              << ", mi matrícula es: " << *pMatricula
              << ", sección: " << *pSeccion << std::endl;
}