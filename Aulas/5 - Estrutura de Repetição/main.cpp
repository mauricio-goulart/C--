/*
Estrutura de repetições
*/

#include <iostream>

using namespace std;

int main()
{
    int n, s = 0;

    cout << "n = ";
    cin >> n;

    while (n <= 0)
    {
        cout << "Digite um numero diferente de 0 e positivo! = ";
        cin >> n;
    }

    for (int i = 0; i <= n; i++)
    {
        s = s + i;
    }

    cout << s << endl;

    return 0;
}