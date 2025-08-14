#include <iostream>
#include "pilha.h"

using namespace std;

stack::stack()
{
    this->size = 0;
    this->structure = new int[max_items];
}

stack::~stack()
{
    delete[] structure;
}

bool stack::is_full()
{
    return size == max_items;
}

bool stack::Is_empty()
{
    if (size == 0)
    {
        cout << "Stack is empty" << endl;
        return true;
    }
    
    return false;
    
}

void stack::push(type_item item)
{
    if (is_full())
    {
       cout << "Stack is full" << endl;
    }
    else
    {
        structure[size] = item;
        size++;
        cout << "Sucess! Item insert: " << item << endl;
    }
    
}

type_item stack::pop()
{
    if (Is_empty())
    {
        return -1;
    }
    else
    {
        size--;
        return structure[size];
    }
    
}

void stack::clear()
{
    while (size != 0)
    {
        size--;
        cout << "Itens removidos: " << endl << structure[size] << endl; 
    }
    
}

type_item stack::top()
{
    if (Is_empty())
    {
        return -1;
    }
    else
    {
        return structure[size - 1];
    }
    
}

type_item stack::peak()
{
    if (Is_empty())
    {
        return -1;
    }
    else
    {
        return structure[0];
    }
    
}

int stack::get_size()
{
    return size;
}

void stack::print()
{
    if (Is_empty())
    {
        
    }
    else
    {
        cout << "Pilha: ";
        for (int i = 0; i < size; i++)
        {
            cout << structure[i] << " ";
        }
        
    }
}

type_item stack::search(type_item item)
{
    int indice = -1;

    if (Is_empty())
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
        return -1;
    }
    
    else
    {
        return indice;
    }
}