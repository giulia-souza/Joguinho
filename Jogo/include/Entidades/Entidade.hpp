using namespace std;
#include <iostream>
#include <string>

class Entidade: public Ente{
    protected:
        int x;
        int y;
        //....
        ostream buffer;
    public:
        Entidade();//construtora
        virtual ~Entidade();//destrutora
        virtual void executar() = 0;
        virtual void salvar() = 0;
        //...
        void salvarDataBuffer();
};