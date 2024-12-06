#pragma once

#include <iostream>

namespace Listas
{
	template <class TL>
	class Lista
	{
	public:
		template <class TE>
		class Elemento
		{
		private:
			Elemento<TE>* prox;
			Elemento<TE>* ant;
			TE* info;

		public:
			Elemento()
			{
				prox = NULL;
				ant = NULL;
				info = NULL;
			}
			~Elemento()
			{
				prox = NULL;
				ant = NULL;
				delete info;
				info = NULL;
			}

			void setProx(Elemento<TE>* novoProx)
			{
				prox = novoProx;
			}
			Elemento<TE>* getProx() const
			{
				return prox;
			}

			void setAnt(Elemento<TE>* novoAnt)
			{
				ant = novoAnt;
			}
			Elemento<TE>* getAnt() const
			{
				return ant;
			}

			void setInfo(TE* novaInfo)
			{
				info = novaInfo;
			}
			TE* getInfo() const
			{
				return info;
			}
		};

	private:
		Elemento<TL>* cabeca;
		Elemento<TL>* cauda;

		unsigned int tam;

	public:
		Lista();
		~Lista();

		Elemento<TL>* getCabeca() const;
		TL* operator[](int index);
		void pushElemento(TL* newInfo);
		TL* pop(int index);
		void limpar();
		const unsigned int getTam() const;
	};
}//namespace Listas;