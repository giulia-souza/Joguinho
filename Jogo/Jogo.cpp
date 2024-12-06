// Jogo.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <SFML/Graphics.hpp>
#include "Gerenciadores/Gerenciador_Grafico.hpp"
#include "Listas/Lista.hpp"

int main()
{
	Listas::Lista<char> lista;

    char teste[2] = "g";
	char teste2[2] = "a";

	lista.pushElemento(teste);
	lista.pushElemento(teste2);


    return 0;
}

/*
Gerenciadores::Gerenciador_Grafico gg;

    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Magenta);

    while (gg.janela_aberta())
    {
        sf::Event event;
        while (gg.getJanela()->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                gg.fechar();
        }

		gg.limpar();
        gg.getJanela()->draw(shape);
        gg.mostrar();
    }
    */