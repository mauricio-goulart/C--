#include <iostream>

using namespace std;

int main()
{
    int n1;
    string cond;

    do
    {
        
        cout << "Digite o tamanho do vetor = ";
        cin >> n1;

        int* vet = new int[n1];

        for (int i = 0; i < n1; i++)
        {
            cout << "[" << i + 1 << "] = ";
            cin >> vet[i];
        }

        for (int i = 0; i < n1; i++)
        {
            cout << vet[i] << " ";
        }

        delete[] vet;
        
        cout << "Deseja continuar? (sim/nao) ";
        cin >> cond;

    } while (cond == "sim");
    
    return 0;

}