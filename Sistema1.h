#pragma once
#include <vector>
#include "Estudiante1.h"
#include "Profesor1.h"
#include "Materia1.h"
#include "Calificacion1.h"
#include "Validacion1.h"
#include "Persistencia1.h"

class Sistema
{
private:
    std::vector<Estudiante> listaEstudiantes;
    std::vector<Profesor> listaProfesores;
    std::vector<Materia> listaMaterias;
    std::vector<Calificacion> listaCalificaciones;

    Validacion validacion;

    // Usamos Persistencia1 para coincidir con el .cpp del maestro
    Persistencia1 persistencia;

public:
    Sistema();
    void menu();
    void registrarEstudiante();
    void registrarProfesor();
    void registrarMateria();
    void registrarCalificacion();
    void verEstudiantes();
    void verProfesores();
    void verMaterias();
    void verCalificaciones();
    void guardarArchivo();
    void cargarArchivo();


    void agregar(const Estudiante& e);
    void agregar(const Profesor& p);
    void agregar(const Materia& m);
    void agregar(const Calificacion& c);

};