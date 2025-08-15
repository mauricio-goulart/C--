#include <iostream>
#include "fila.h"

using namespace std;

int main()
{
    queue my_queue;
    int menu_option;
    type_item item;

    do
    {
        
        cout << "-------- Menu Queue --------" << endl;
        cout << "[1] - Push " << endl;
        cout << "[2] - Pop " << endl;
        cout << "[3] - Print " << endl;
        cout << "[-1] - Exit " << endl;
        cout << "----------------------------" << endl;
        cout << "Option: ";
        cin >> menu_option;

        switch (menu_option)
        {
        case 1:
            
            cout << "Item: ";
            cin >> item;

            my_queue.push(item);

            break;

        case 2:
            
            item = my_queue.pop();
            cout << "Removed: " << item << endl; 

            break;

        case 3: 

            my_queue.print();
            
            break;
        
        default:
            break;
        }


    } while (menu_option != -1);
    
}