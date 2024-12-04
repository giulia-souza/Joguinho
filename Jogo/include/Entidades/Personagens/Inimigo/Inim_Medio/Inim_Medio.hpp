#ifndef INIM_MEDIO_HPP
#define INIM_MEDIO_HPP

#include "Inimigo.hpp"

class Inim_Medio : public Inimigo {
private:
    int tamanho;
public:
    Inim_Medio();
    ~Inim_Medio();

    void executar();
    void danificar(Jogador* p);
};

#endif // INIM_MEDIO_HPP