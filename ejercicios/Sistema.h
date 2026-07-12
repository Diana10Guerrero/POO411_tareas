#pragma once
#include <vector>
#include "Estudiante.h"
#include "Profesor.h"
#include "Materia.h"
#include "Calificacion.h"
#include "Validacion.h"
#include "Persistencia.h"


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