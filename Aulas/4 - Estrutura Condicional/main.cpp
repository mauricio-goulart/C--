/*
Estrutura Condicional e operadores logicos
*/

#include <iostream>

using namespace std;

int main()
{
    int f;
    float n1,n2,m;

    cout << "frequencia = ";
    cin >> f;
    cout << "n1 = ";
    cin >> n1;
    cout << "n2 = ";
    cin >> n2;

    m = (n1 + n2) / 2;

    if (m >= 6 && f >= 5)
    {
        cout << "Aprovado" << endl;
    }

    else if (m > 3 && f >= 5)
    {
        cout << "Exame" << endl;
    }
    
    else 
    {
        cout << "Reprovado" << endl;
    }

    (m == 100) ? cout << "sigma aproved" : cout << "Calculando..."; // Operador ternario.


    return 0;

}