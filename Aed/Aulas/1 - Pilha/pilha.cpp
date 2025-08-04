#include <iostream>
#include "pilha.h"

using namespace std;

pilha::pilha() //Construtura
{
    this->tamanho = 0;
    this->estrutura = new int[max_itens];
}

pilha::~pilha() //Destrutor
{
    delete[] estrutura; 
}

pilha::pilha_cheia()
{
    return tamanho == max_itens;
}

pilha::pilha_vazia()
{
    return tamanho == 0;
}

pilha::inserir()
{
    if (pilha_cheia())
    {
        cout << "Pilha cheia!" << endl;
    }
    else
    {
        estrutura[tamanho] = item;
        tamanho++;
        cout << "Item inserido: " << item << endl;
    }
}

pilha::remover()
{
    if (pilha_vazia())
    {
        cout << "Pilha vazia!" << endl;
        return 0;
    }
    else
    {
        return estrutura[tamanho - 1];
        tamanho--;
    }
    
}

pilha::get_tamanho()
{

}

pilha::imprimir()
{
    cout << "Pilha: [";
    
    for (int i = 0; i < tamanho; i++)
    {
        /* code */
    }
    
}