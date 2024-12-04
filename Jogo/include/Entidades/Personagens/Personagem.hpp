#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include "Entidade.hpp"

class Personagem: public Entidade{
    protected:
        int num_vidas;
        //....
    public:
        Personagem();//construtora
        ~Personagem();//destrutora
        void salvarDataBuffer();
        virtual void mover();
        virtual void executar() = 0;
        //...
};

#endif