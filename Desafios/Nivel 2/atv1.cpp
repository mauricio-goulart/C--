#include <iostream>

using namespace std;

int main()
{

    int* f = new int[5];
    int media = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << endl << i + 1 << "* Familia" << endl;
        cout << "Gastos = ";

        cin >> f[i];

        media = media + f[i];
    }

    media = media / 5;

    for (int i = 0; i < 5; i++)
    {
        if (f[i] == media)
        {
            cout << i + 1 << "* Familia esta na media" << endl;
        }
        else if (f[i] > media)
        {
            cout << i + 1 << "* Familia esta acima da media" << endl;
        }
        else
        {
            cout << i + 1 << "* Familia esta abaixo da media" << endl;
        }
        
    }
    
}