#include "Listas/Lista.hpp"

namespace Listas {
	template <class TL>
	Lista<TL>::Lista()
	{
		tam = 0;
		cabeca = NULL;
		cauda = NULL;
	}

	template <class TL>
	Lista<TL>::~Lista()
	{
		clear();
	}

	template <class TL>
	Lista<TL>::Elemento<TL>* Lista<TL>::getCabeca() const
	{
		return cabeca;
	}


	//Sobre carga de operador para acessar algum elemento na sua dev posição
	template <class TL>
	TL* Lista<TL>::operator[](int index)
	{
		if (index >= tam || index < 0)
		{
			std::cout << "Index fora do limite da lista" << std::endl;
			exit(1);
		}

		Elemento<TL>* pAux = cabeca;
		for (int i = 0; i < index; i++)
			pAux = pAux->getProx();

		return pAux->getInfo();
	}


	//Adicionar elementos na lista
	template <class TL>
	void Lista<TL>::pushElemento(TL* newInfo)
	{
		if (newInfo == NULL)
		{
			std::cout << "Tentando adicionar ponteiro nulo na lista" << std::endl;
			exit(1);
		}

		Elemento<TL>* elemento = new Elemento<TL>();
		elemento->setInfo(newInfo);

		if (cabeca == NULL)//lista vazia
		{
			cabeca = elemento;
			cauda = elemento;
			tam++;
			std::cout << "Adicionado" << std::endl;
			return;
		}

		//se nao for vazia, adiciona no final

		elemento->setAnt(cauda);
		elemento->setProx(NULL);
		cauda->setProx(elemento);
		cauda = elemento;
		tam++;
		std::cout << "Adicionado" << std::endl;
	}

	//Remove elementos da lista com um certo indice
	template <class TL>
	TL* Lista<TL>::pop(int index)
	{
		if (index >= tam || index < 0)//verificando se o indice está nos limites da lista
		{
			std::cout << "Index fora do limite da lista" << std::endl;
			exit(1);
		}

		Elemento<TL>* pAux = cabeca;

		for (int i = 0; i < index; i++)//loop p chegar na pos
			pAux = pAux->getProx();

		if (pAux == cabeca)//se pAux for cabeça
			cabeca = pAux->getProx();

		else if (pAux == cauda)//se pAux for cauda
			pAux->getAnt()->setProx(NULL);

		else
			pAux->getAnt()->setProx(pAux->getProx());
		pAux->getProx()->setAnt(pAux->getAnt());

		TL* pAux2 = pAux->getInfo();
		delete pAux;
		return pAux2;
	}


	//Remove todos os Elementos da lista
	template <class TL>
	void Lista<TL>::limpar()
	{
		if (cabeca != NULL)
		{
			Elemento<TL>* pAux = cabeca->getProx();

			while (pAux != NULL)//Enqt pAux for diferente de nulo..
			{
				cabeca->setProx(pAux->getProx());
				delete pAux;
				pAux = cabeca->getProx();
			}
			delete cabeca;
			cabeca = NULL;
			cauda = NULL;
			tam = 0;
		}
	}

	template<class TL>
	const unsigned int Lista<TL>::getTam() const
	{
		return tam;
	}
}