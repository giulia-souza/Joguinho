#ifndef JOGADOR_H
#define JOGADOR_H

#include "Personagem.hpp"

class Jogador : public Personagem{
    private:
        int pontos;
    public:
        Jogador();//construtora
        ~Jogador();//destrutora
        void executar();
        void salvar();//aq q ficaria o salvar?
        //...
};

#endif // JOGADOR_H