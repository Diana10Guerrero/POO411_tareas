#pragma once
#include "Validacion1.h"


Validacion::Validacion()
{
    resultado = false;
}


bool Validacion::validarNombre(std::string nombre)
{
    std::string *pNombre = &nombre;

    if(*pNombre == "")
    {
        return false;
    }

    return true;
}


bool Validacion::validarMatricula(std::string matricula)
{
    std::string *pMatricula = &matricula;

    if(pMatricula->length() != 9)
    {
        return false;
    }

    return true;
}


bool Validacion::validarCodigo(std::string codigo)
{
    std::string *pCodigo = &codigo;

    if(*pCodigo == "")
    {
        return false;
    }

    return true;
}


bool Validacion::validarNota(float nota)
{
    float *pNota = &nota;

    if(*pNota < 0 || *pNota > 100)
    {
        return false;
    }

    return true;
}


bool Validacion::validarSesion(std::string sesion)
{
    std::string *pSesion = &sesion;

    if(*pSesion == "")
    {
        return false;
    }

    return true;
}