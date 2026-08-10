#include "Cliente.h"
#include <string>
#include <memory>
#include <iostream>

Cliente::Cliente(const std::string& _cedula,
                 const std::string& _nombre,
                 const std::string& _telefono)
    : cedula(_cedula), nombre(_nombre), telefono(_telefono) {}

std::string Cliente::getCedula() const { return cedula; }
std::string Cliente::getNombre() const { return nombre; }
std::string Cliente::getTelefono() const { return telefono; }
