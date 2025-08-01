#include <iostream>

using namespace std;

class propaganda
{
    private:

        int duracao;

    public:

        void setDuracao(int d)
        {
            duracao = d;
            cout << "Duracao da propaganda: " << duracao << " segundos" << endl;
        }
};

class carro
{
    private:
    
        int ano;
        float valor,km;
}

    public:

        void setAno(int a)
        {
            this->ano = a;
            cout << "Ano do carro setado: " << ano << endl;
        }

        int getAno()
        {
            return ano;
        }


int main()
{

    propaganda globo;

    globo.setDuracao(30);


    return 0;
}