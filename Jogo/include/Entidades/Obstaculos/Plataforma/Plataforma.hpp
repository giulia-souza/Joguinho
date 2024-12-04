#ifndef PLATAFORMA_HPP
#define PLATAFORMA_HPP

#include "Obstaculos.hpp"

class Plataforma : public Obstaculos {
private:
    int altura;
    int largura;
    bool movel;
    //...
public:
    Plataforma();
    ~Plataforma();

    void executar();
    void obstacular(Personagem* p);
    //...
};

#endif // PLATAFORMA_HPP