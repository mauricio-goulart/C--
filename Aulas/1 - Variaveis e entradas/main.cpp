/*
Variaveis e entradas
*/

#include <iostream>

using namespace std;

int main()
{
    
    //Tipos de dados
    float altura;
    int cep;
    int idade = 20;
    char sexualidade = 'h';
    string nome = "mauricio";

    altura = 1.70;
    
    cout << "Qual o CEP = ";
    cin >> cep;
    
    cout << "Nome = " << nome << endl << "Idade = " << idade << endl << "Altura = " << altura << endl << "Sexualidade = " << sexualidade << endl << "CEP = " << cep << endl;

    return 0;

}