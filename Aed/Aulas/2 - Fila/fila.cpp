#include <iostream>
#include "fila.h"

using namespace std;

queue::queue()
{
    this->first = 0;
    this->last = 0;
    
    this->queue_array = new type_item[max_items];
}

queue::~queue()
{
    delete[] queue_array;
}

bool queue::is_full()
{
    return last - first == max_items;
}

bool queue::is_empty()
{
    return first == last;
}

void queue::push(type_item item)
{
    if (is_full())
    {
        cout << "Fail! Queue is full" << endl;

    }
    else
    {
        queue_array[last % max_items] = item;
        last++;
    }
    
}

type_item queue::pop()
{
    if (is_empty())
    {
        cout << "Fail! Queue is empty";

        return -1;
    }
    else
    {
        first++;

        return queue_array[(first-1) % max_items];
    }
    
}

void queue::print()
{
    cout << "Queue: ";

    for (int i = first; i < last; i++)
    {
        cout << queue_array[i % max_items] << " ";
    }

    cout << endl;
    
}