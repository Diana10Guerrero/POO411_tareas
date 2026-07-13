// Incluyo plantilla de materia
#include "Materia1.h"
#include <iostream>
#include <fstream>

// Defino constructor de Materia
Materia::Materia(std::string _nombre, float _codigo, float _creditos)
{
    std::string *pNombre = &_nombre;
    float *pCodigo = &_codigo;
    float *pCreditos = &_creditos;

    nombre = *pNombre;
    codigo = *pCodigo;
    creditos = *pCreditos;
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