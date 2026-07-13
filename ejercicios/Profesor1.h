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

    std::string get_nombre() const { return nombre; }
    std::string get_codigo() const { return codigo; }

    void mostrar() const;
    void serializar(std::ofstream &archivo) const;
};