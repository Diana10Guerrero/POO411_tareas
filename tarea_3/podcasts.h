#pragma once
#include <string>
#include <memory>
#include "Audio.h"

class Podcasts : public Audio {
private:
    std::string presentador;

public:
    Podcasts(const std::string& _titulo,
             const std::string& _presentador);

    Podcasts(const Podcasts& otro);

    void mostrarInfo() const override;
};
