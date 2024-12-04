#ifndef INIMIGO_H
#define INIMIGO_H

#include "Personagem.hpp"
#include "Jogador.hpp"

class Inimigo : public Personagem{
    protected:
        int nivel_malvadeza;
        //...
    public:
        Inimigo();//construtora
        ~Inimigo();//destrutora
        virtual void executar()=0;
        virtual void danificar(Jogador* p) = 0;
        //...
};

#endif // Inimigo_H