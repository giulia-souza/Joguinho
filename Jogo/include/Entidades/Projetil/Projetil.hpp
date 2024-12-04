#ifndef PROJETIL_HPP
#define PROJETIL_HPP

#include "Entidade.hpp"

class Projetil : public Entidade{
    protected:
        bool ativo;
    public:
        Projetil();
        ~Projetil();
        void executar();
        void salvar();//meeedo
};

#endif // PROJETIL_HPP