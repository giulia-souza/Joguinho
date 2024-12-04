#ifndef ENTE_HPP
#define ENTE_HPP

#include <iostream>
#include "Gerenciador_Grafico.hpp"
class Ente {
protected:
	int id;
	static Gerenciador_Grafico* pGG;
	//Fiigura* pFiig;
	//...
public:
	Ente();
	virtual ~Ente();
	virtual void executar() = 0;
	void desenhar();
	//...
};

#endif// ENTE_HPP