#pragma once
#include <string>
#include <memory>
#include "Audio.h"

class Canciones : public Audio {
private:
    std::string autor;

public:
    Canciones(const std::string& _titulo,
              const std::string& _autor);

    Canciones(const Canciones& otro);

    void mostrarInfo() const override;
};
