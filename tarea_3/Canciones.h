#pragma once
#include <iostream>
#include <fstream>
#include <string>

class Canciones {
private:
    std::string nombre;
    std:: string artista;
    std:: string genero;
    std:: string album;
    float duracion; 

public:
    // Constructor  
    Canciones(const std::string& _nombre, const std::string& _artista, const std::string& _genero, const std::string& _album, float _duracion)
        : nombre(_nombre), artista(_artista), genero(_genero), album(_album), duracion(_duracion) {}

         Canciones(const Canciones& otro)
    {
        std::unique_ptr<std::string> nombre = std::make_unique<std::string>(otro.nombre);
        std::unique_ptr<std::string> artista = std::make_unique<std::string>(otro.artista);
        std::unique_ptr<std::string> genero = std::make_unique<std::string>(otro.genero);
        std::unique_ptr<std::string> album = std::make_unique<std::string>(otro.album);
        std::unique_ptr<float> duracion = std::make_unique<float>(otro.duracion);
      
       nombre->mostrar();
       artista->mostrar();
       genero->mostrar();
       album->mostrar();
       duracion->mostrar();

    
    }
}

 void mostrar() const {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Artista: " << artista << std::endl;
        std::cout << "Género: " << genero << std::endl;
        std::cout << "Álbum: " << album << std::endl;
        std::cout << "Duración: " << duracion << " minutos" << std::endl;
    }

    void reproducir() const {
        std::cout << "Reproduciendo la canción: " << nombre << " de " << artista << std::endl;
    }

    void serializar(std::ofstream &archivo) const {
        archivo << nombre << "," << artista << "," << genero << "," << album << "," << duracion << std::endl;
    }

