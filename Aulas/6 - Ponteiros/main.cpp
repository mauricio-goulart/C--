/*
Ponteiros
*/

#include <iostream>
#include <cstddef> //NULL

using namespace std;

int main()
{

    int var1;
    int* p;
    
    p = NULL;

    var1 = 5;
    p = &var1; // Ponteiro está apontando para a variavel

    cout << p << endl; // Valor do endereço da variavel

    cout << *p << endl; // Valor da variavel
    
    *p = 45; // Altera o valor da varivel
    
    int* p2 = new int;
    
    *p2 = 35;
    
    //delete p2; para não vazar memoria
    p2 = p; // Está apontando para onde o p aponta, ocasionando uma fuga de memoria
    
    return 0;

}