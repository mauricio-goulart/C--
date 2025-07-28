#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    string cond;
    int n1, n2;

    do
    {
        int x;

        cout << "base = ";
        cin >> n1;

        cout << "expoente = ";
        cin >> n2;

        x = pow(n1, n2);
        
        cout << "Valor = " << x << endl;

        cout << "Quer repetir?: ";
        cin >> cond;

    } while (cond == "sim");
    

    return 0;
}