#include <iostream>

using namespace std;

int main()
{

    int idade;
    float renda;

    cout << "Idade = ";
    cin >> idade;
    
    cout << "Renda = ";
    cin >> renda;

    if (idade > 21 && renda < 1200)
    {
        cout << "APROVADO PARA O PROGRAMA" << endl;
    }
    else
    {
        cout << "REPROVADO PARA O PROGRAMA" << endl;
    }
    
    return 0;
}