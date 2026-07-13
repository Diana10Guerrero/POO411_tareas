#include "Sistema1.h"
#include <iostream>


Sistema::Sistema()
{
    cargarArchivo();
}


void Sistema::menu()
{
    int opcion;


    do
    {
        std::cout << "\n===== SISTEMA DE REGISTRO DE CALIFICACIONES =====\n";
        std::cout << "1. Registrar estudiante\n";
        std::cout << "2. Registrar profesor\n";
        std::cout << "3. Registrar materia\n";
        std::cout << "4. Registrar calificacion\n";
        std::cout << "5. Ver estudiantes\n";
        std::cout << "6. Ver profesores\n";
        std::cout << "7. Ver materias\n";
        std::cout << "8. Ver calificaciones\n";
        std::cout << "9. Salir\n";

        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;


        switch(opcion)
        {

        case 1:
            registrarEstudiante();
            break;


        case 2:
            registrarProfesor();
            break;


        case 3:
            registrarMateria();
            break;


        case 4:
            registrarCalificacion();
            break;


        case 5:
            verEstudiantes();
            break;


        case 6:
            verProfesores();
            break;


        case 7:
            verMaterias();
            break;


        case 8:
            verCalificaciones();
            break;


        case 9:
            guardarArchivo();
            std::cout << "Datos guardados.\n";
            break;


        default:
            std::cout << "Opcion incorrecta.\n";
        }


    }while(opcion != 9);

}



void Sistema::registrarEstudiante()
{
    std::string nombre;
    std::string matricula;
    std::string sesion;


    std::cout << "Nombre completo: ";
    std::cin.ignore();
    getline(std::cin, nombre);


    while(validacion.validarNombre(nombre) == false)
    {
        std::cout << "Nombre incorrecto: ";
        getline(std::cin, nombre);
    }


    std::cout << "Matricula: ";
    std::cin >> matricula;


    while(validacion.validarMatricula(matricula) == false)
    {
        std::cout << "Matricula incorrecta: ";
        std::cin >> matricula;
    }


    std::cout << "Sesion: ";
    std::cin >> sesion;


    while(validacion.validarSesion(sesion) == false)
    {
        std::cout << "Sesion incorrecta: ";
        std::cin >> sesion;
    }


    Estudiante nuevo(nombre, matricula, sesion);


    listaEstudiantes.push_back(nuevo);


    std::cout << "Estudiante registrado correctamente.\n";
}



void Sistema::verEstudiantes()
{
    for(int i = 0; i < listaEstudiantes.size(); i++)
    {
        listaEstudiantes[i].mostrar();
    }
}



void Sistema::verProfesores()
{
    for(int i = 0; i < listaProfesores.size(); i++)
    {
        listaProfesores[i].mostrar();
    }
}



void Sistema::verMaterias()
{
    for(int i = 0; i < listaMaterias.size(); i++)
    {
        listaMaterias[i].mostrar_info();
    }
}



void Sistema::verCalificaciones()
{
    for(int i = 0; i < listaCalificaciones.size(); i++)
    {
        listaCalificaciones[i].mostrar();
    }
}



void Sistema::guardarArchivo()
{
    persistencia.guardarEstudiantes();

    persistencia.guardarProfesores();

    persistencia.guardarMaterias();

    persistencia.guardarCalificaciones();
}



void Sistema::cargarArchivo()
{
    persistencia.cargarEstudiantes();

    persistencia.cargarProfesores();

    persistencia.cargarMaterias();

    persistencia.cargarCalificaciones();
}