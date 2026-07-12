#ifndef validacion_h
#define validacion_h

#include <string>

class Validacion
{

private:

    bool resultado;


public:

    Validacion();

    bool validarNombre(std::string nombre);

    bool validarMatricula(std::string matricula);

    bool validarCodigo(std::string codigo);

    bool validarNota(float nota);

    bool validarSesion(std::string sesion);

};
