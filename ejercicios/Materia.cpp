// Incluyo plantilla de materia
#include "Materia.h"
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
