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

int main()
{

    propaganda globo;

    globo.setDuracao(30);


    return 0;
}