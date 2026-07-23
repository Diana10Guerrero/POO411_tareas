// Incluyo plantilla de materia
#include "Materia1.h"
#include <iostream>
#include <fstream>

// Constructor de Materia usando punteros (estilo del maestro)
Materia::Materia(std::string _nombre, float _codigo, float _creditos)
{
    std::string *pNombre = new std::string(_nombre);
    float *pCodigo = new float(_codigo);
    float *pCreditos = new float(_creditos);

    nombre = *pNombre;
    codigo = *pCodigo;
    creditos = *pCreditos;

    delete pNombre;
    delete pCodigo;
    delete pCreditos;
}

// Constructor de copia 
Materia::Materia(const Materia& otro)
{
    std::string *pNombre = new std::string(otro.nombre);
    float *pCodigo = new float(otro.codigo);
    float *pCreditos = new float(otro.creditos);

    nombre = *pNombre;
    codigo = *pCodigo;
    creditos = *pCreditos;

    delete pNombre;
    delete pCodigo;
    delete pCreditos;
}

// Método para mostrar información de la materia
void Materia::mostrar_info()
{
    std::string *pNombre = &nombre;
    float *pCodigo = &codigo;
    float *pCreditos = &creditos;

    std::cout << "Materia: " << *pNombre
              << ", Código: " << *pCodigo
              << ", Créditos: " << *pCreditos << std::endl;
}
