#include <iostream>

using namespace std;

int main()
{
    int* n = new int[2];
    int soma = 0;

    cout << "Digite dois numeros = [][] ";
    cin >> n[0];
    cin >> n[1];

    int mat[n[0]][n[1]];

    for (int i = 0; i < n[0]; i++)
    {
        for (int j = 0; j < n[1]; j++)
        {
            cout << "[" << i + 1 << "]" << "[" << j + 1 << "] = ";
            cin >> mat[i][j];
        }
        
    }

    cout << endl;

    for (int i = 0; i < n[0]; i++)
    {
        for (int j = 0; j < n[1]; j++)
        {
            cout << mat[i][j] << " ";
        }

        cout << endl;
        
    }

    for (int i = 0; i < n[0]; i++)
    {
        for (int j = 0; j < n[1]; j++)
        {
            soma = soma + mat[i][j];
        }

    }
    
    cout << "Soma = " << soma << endl;
    
    delete[] n;

    return 0;
        
}