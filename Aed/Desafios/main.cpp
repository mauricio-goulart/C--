/*

Faça um programa que calcule operacoes e guarde na pilha

*/
#include <iostream>
#include "pilha.h"

using namespace std;

int main()
{
    stack my_stack;
    type_item item;
    int menu_option;

    do
    {

        cout << " -------- Menu Stack -------- " << endl;
        cout << "[1] - Push " << endl;
        cout << "[2] - Pop " << endl;
        cout << "[3] - Clear " << endl;
        cout << "[4] - Top Item " << endl;
        cout << "[5] - Peak Item " << endl;
        cout << "[6] - Print " << endl;
        cout << "[7] - Search " << endl;
        cout << "[-1] - Exit " << endl << endl;
        cout << " ---------------------------- " << endl << endl;
        cout << "Option: ";
        cin >> menu_option;

        



        switch (menu_option)
        {
        case 1:

            cout << "Insert Item: ";
            cin >> item;
            my_stack.push(item);

            break;
        
        case 2:

            break;
        
            
        default:
            break;
        }



        






    } while (menu_option != -1);
    



    return 0;
}