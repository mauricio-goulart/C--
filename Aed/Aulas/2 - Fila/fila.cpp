#include <iostream>
#include "fila.h"

using namespace std;

queue::queue()
{
    this->first = 0;
    this->last = 0;
    
    this->queue_array = new type_item[max_items]
}

queue::~queue()
{
    delete[] queue_array;
}

bool queue::is_full()
{
    return last - firts == max_items
}

bool queue::is_empty()
{
    return first == last;
}

void queue::push(type_item item)
{
    if (is__full()
    {
        cout << "Fail! Queue is full" << endl;

    }
    else
    {
        
    }
    
}

type_item queue::pop()
{

}

void queue::print()
{

}