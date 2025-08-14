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
    cout << "Items removed: ";

    while (size != 0)
    {
        size--;
        cout << structure[size] << " " ; 
    }

    cout << endl;
    
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

type_item stack::bottom()
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
        return;
    }
    else
    {
        cout << "Stack: ";
        for (int i = 0; i < size; i++)
        {
            cout << structure[i] << " ";
        }
        
        cout << endl;
    }
}

int stack::search(type_item item)
{
    int index = -1;

    if (Is_empty())
    {
        
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            if (structure[i] == item)
            {
               index = i;
               break;
            }
            
        }
        
    }

    if (index == -1)
    {
        return -1;
    }
    
    else
    {
        return index;
    }
}