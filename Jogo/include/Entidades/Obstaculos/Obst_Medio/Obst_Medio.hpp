#ifndef OBST_MEDIO_HPP
#define OBST_MEDIO_HPP

#include "Obstaculos.hpp"

class Obst_Medio : public Obstaculos {
private:
    float largura;
    //...
public:
    Obst_Medio();
    ~Obst_Medio();

    void executar();
    //...
};

#endif // OBST_MEDIO_HPP