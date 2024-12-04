#ifndef OBST_DIFICIL_HPP
#define OBST_DIFICIL_HPP

#include "Obstaculos.hpp"

class Obst_Dificil : public Obstaculos {
private:
    bool elasticidade;
public:
    Obst_Dificil();
    ~Obst_Dificil();
    //...
};

#endif // OBST_DIFICIL_HPP