#pragma once
#include <string>
#include <fstream>

class Profesor {
private:
    std::string codigo;
    std::string nombre;
    std::string matricula;
    std::string sesion;

public:
    Profesor() {}
    Profesor(std::string _nombre, std::string _codigo);

    // Constructor de copia 
    Profesor(const Profesor& otro)
    {
        std::string *pNombre = new std::string(otro.nombre);
        std::string *pCodigo = new std::string(otro.codigo);
        std::string *pMatricula = new std::string(otro.matricula);
        std::string *pSesion = new std::string(otro.sesion);

        nombre = *pNombre;
        codigo = *pCodigo;
        matricula = *pMatricula;
        sesion = *pSesion;

        delete pNombre;
        delete pCodigo;
        delete pMatricula;
        delete pSesion;
    }

    std::string get_nombre() const { return nombre; }
    std::string get_codigo() const { return codigo; }

    void mostrar() const;
    void serializar(std::ofstream &archivo) const;
};
