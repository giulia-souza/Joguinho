#ifndef INIM_FACIL_HPP
#define INIM_FACIL_HPP

#include <iostream>
#include <string>
#include "Inimigo.hpp"

class Inim_Facil : public Inimigo {
private:
    float raio;
public:
    Inim_Facil();
    ~Inim_Facil();

    void danificar(Jogador* p);
    void executar();
    //...
};

#endif // INIM_FACIL_HPP