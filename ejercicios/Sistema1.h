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

    Persistencia persistencia;


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

};