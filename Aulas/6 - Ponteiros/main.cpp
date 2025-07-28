/*
Ponteiros
*/

#include <iostream>

using namespace std;

int main()
{

    int var1;
    int* p;

    var1 = 5;
    p = &var1; // Ponteiro está apontando para a variavel

    cout << p << endl; // Valor do endereço da variavel


    return 0;

}