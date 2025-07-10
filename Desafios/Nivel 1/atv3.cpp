#include <iostream>

using namespace std;

int fat(int num)
{
    int tot = 1;
    for (int i = 1; i <= num; i++)
    {
        tot = tot * i;
    }

    return tot;
    
}

 int main()
{
    int n, fatorial;

    cout << "Digite um numero: ";
    cin >> n;

    fatorial = fat(n);

    cout << "Fatorial de [" << n << "] = [" << fatorial << "]" << endl;

    return 0;
}