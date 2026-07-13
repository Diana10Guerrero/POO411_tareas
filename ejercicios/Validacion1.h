#ifndef validacion1_h
#define validacion1_h

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
