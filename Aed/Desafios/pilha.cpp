#include <iostream>
#include "pilha.h"

using namespace std;

pilha::pilha()
{
    this->size = 0;
    this->structure = new int[max_items];
}

pilha::~pilha()
{
    delete[] structure;
}

bool pilha::is_full()
{
    return size == max_items;
}

bool pilha::is_empty()
{
    if (size == 0)
    {
        cout << "Stack is empty" << endl;
        return true;
    }
    
    return false;
    
}

void pilha::push(type_item item)
{
    if (is_full())
    {
       cout << "Stack is full" << endl;
    }
    else
    {
        structure[size] = item;
        size++;
        cout << "Item insert: " << item; << endl;
    }
    
}

type_item pilha::pop()
{
    if (is_empty())
    {
        return -1;
    }
    else
    {
        size--;
        return structure[size];
    }
    
}

void pilha::clear()
{
    while (size != 0)
    {
        size--;
        cout << "Itens removidos: " << endl << structure[size] << endl; 
    }
    
}

type_item pilha::top()
{
    if (is_empty())
    {
        return -1;
    }
    else
    {
        return structure[size - 1];
    }
    
}

type_item pilha::peak()
{
    if (is_empty())
    {
        return -1;
    }
    else
    {
        return structure[0];
    }
    
}

int size()
{
    return size;
}

void pilha::print()
{
    if (is_empty())
    {
        
    }
    else
    {
        cout << "Pilha: "
        for (int i = 0; i < size; i++)
        {
            cout << structure[i] << " ";
        }
        
    }
}

type_item pilha::search(type_item item)
{
    int indice = -1;

    if (is_empty())
    {
        
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            if (structure[i] == item)
            {
               indice = i;
               break;
            }
            
        }
        
    }

    if (indice == -1)
    {
        return -1
    }
    
    else
    {
        return indice;
    }
}