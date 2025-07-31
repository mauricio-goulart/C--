/*
Vetores
*/

#include <iostream>

using namespace std;

int main()
{
    //Alocação estatica
    int vet[4];
    int vet2[] = {1,2,3};
    
    vet[0] = 20;
    
    for (int i = 0; i < 3; i++)
    {
        cout << vet2[i] << " ";
    }
    
    //Alocação dinamica
    int tamanho;
    
    cout << endl << "Tamanho = ";
    cin >> tamanho;
    
    int* vetor = new int[tamanho];

    delete [] vetor;
    
    return 0;
    
}