#include "Profesor1.h"
#include <iostream>
#include <fstream>

Profesor::Profesor(std::string _nombre, std::string _codigo) {

    std::string *pNombre = &_nombre;
    std::string *pCodigo = &_codigo;

    nombre = *pNombre;
    codigo = *pCodigo;
}

void Profesor::mostrar() const {

    std::string *pNombre = const_cast<std::string*>(&nombre);
    std::string *pCodigo = const_cast<std::string*>(&codigo);

    std::cout << "Profesor: " << *pNombre
              << " | Código: " << *pCodigo << std::endl;
}

void Profesor::serializar(std::ofstream &archivo) const {

    std::string *pNombre = const_cast<std::string*>(&nombre);
    std::string *pCodigo = const_cast<std::string*>(&codigo);

    archivo << *pNombre << "\n"
            << *pCodigo << "\n";
} 