#ifndef OBSTACULOS_HPP
#define OBSTACULOS_HPP

#include "Entidade.hpp"
#include "Personagem.hpp"

class Obstaculos : public Entidade {
    protected:
        bool danoso;
    public:
        Obstaculos();
        ~Obstaculos();
        virtual void executar() = 0;
        virtual void obstacular(Personagem* p) = 0;
};

#endif // OBSTACULOS_HPP