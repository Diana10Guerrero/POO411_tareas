#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <memory>

#include "MaterialBiblioteca.h"
#include "Usuario.h"
#include "Prestamo.h"

class SistemaBiblioteca {
private:
    std::vector<std::unique_ptr<MaterialBiblioteca>> materiales;
    std::vector<Usuario> usuarios;
    std::vector<Prestamo> prestamos;

public:
    SistemaBiblioteca() = default;

    // Agregar material (Libro o Revista)
    void agregarMaterial(std::unique_ptr<MaterialBiblioteca> material) {
        materiales.push_back(std::move(material));
    }

    // Agregar usuario
    void agregarUsuario(const Usuario& usuario) {
        usuarios.push_back(usuario);
    }

    // Registrar préstamo
    void registrarPrestamo(const std::string& codigoUsuario,
                           const std::string& codigoMaterial);

    // Devolver material
    void devolverMaterial(const std::string& codigoMaterial);

    // Mostrar materiales
    void mostrarMateriales() const;

    // Cargar y guardar archivos
    void cargarDatos();
    void guardarDatos();

    // Menú principal
    void menu();
};
