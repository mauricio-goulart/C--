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

bool pilha::pilha_cheia()
{
    return tamanho == max_itens;
}

bool pilha::pilha_vazia()
{
    return tamanho == 0;
}

void pilha::inserir(tipo_item item)
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

tipo_item pilha::remover()
{
    if (pilha_vazia())
    {
        cout << "Pilha vazia!" << endl;
        return -2;
    }
    else
    {
        tamanho--;
        return estrutura[tamanho];
        
    }
    
}

int pilha::get_tamanho()
{
    return tamanho;
}

void pilha::imprimir()
{
    cout << "Pilha: [ ";
    
    for (int i = 0; i < tamanho; i++)
    {
        cout << estrutura[i] << " ";
    }

    cout << "]" << endl;
}