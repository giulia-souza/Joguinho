#ifndef CHEFAO_HPP
#define CHEFAO_HPP

#include <iostream>
#include <string>
#include "Inimigo.hpp"

class Chefao : public Inimigo {
private:
    short int forca;
    //...
public:
    Chefao();
    ~Chefao();

    void executar();
    //...
};

#endif // CHEFAO_HPP