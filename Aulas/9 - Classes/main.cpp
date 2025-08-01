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


    public:

        void setAno(int a)
        {
            this->ano = a;
        }

        int getAno()
        {
            return ano;
        }

        void setValor(float v)
        {
            this->valor = v;
        }

        float getValor()
        {
            return valor;
        }

        void setKm(float k)
        {
            this->km = k;
        }

        float getKm()
        {
            return km;

};
int main()
{

    propaganda globo;
    globo.setDuracao(30);

    carro parati;

    parati.setAno(1992);
    cout << "Ano do carro: " << parati.getAno() << endl;

    return 0;
}