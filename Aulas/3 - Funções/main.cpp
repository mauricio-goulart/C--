/*
Funções
*/

#include <iostream>

using namespace std;

#define pi 3.14;
#define name cout << "Mauricio Azevedo Goulart" << endl;

int soma(int a, int &b)
{
    b = 10;
    return a + b;
}

int main()
{
    int b = 4; //Utilizando o & na chamada da função vincula o valor de lá.
    int n = soma(2,b);

    cout << n << endl;

    //cout << pi << endl;

    name;

    return 0;
}