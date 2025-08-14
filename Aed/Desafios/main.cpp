/*

Faça um programa que calcule operacoes e guarde na pilha

*/
#include <iostream>
#include "pilha.h"

using namespace std;

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    stack my_stack;
    type_item item;
    int menu_option;

    int n1,n2;


    do
    {
        cout << "-------- Menu Multiply --------" << endl;
        cout << "Number 1: ";
        cin >> n1;
        cout << "Number 2: ";
        cin >> n2;

        int mult = multiply(n1, n2);

        do
        {
            cout << "-------- Menu Stack --------" << endl;
            cout << "[1] - Push " << endl;
            cout << "[2] - Pop " << endl;
            cout << "[3] - Clear " << endl;
            cout << "[4] - Top Item " << endl;
            cout << "[5] - Bottom Item " << endl;
            cout << "[6] - Print " << endl;
            cout << "[7] - Search " << endl;
            cout << "[0] - New Number" << endl;
            cout << "[-1] - Exit " << endl << endl;
            cout << "----------------------------" << endl << endl;
            cout << "Option: ";
            cin >> menu_option;
    
            switch (menu_option)
            {

            case 1:

                my_stack.push(mult);

                break;
            
            case 2:

                item = my_stack.pop();
                cout << "Removed: " << item << endl;

                break;

            case 3:

                my_stack.clear();

                break;

            case 4:

                item = my_stack.top();
                cout << "Top: " << item << endl;

                break;

            case 5:

                item = my_stack.bottom();
                cout << "Bottom: " << item << endl;

                break;

            case 6:
                
                my_stack.print();

                break;

            case 7:

                int index;
                cout << "Search: ";
                cin >> item;

                index = my_stack.search(item);

                cout << "Index: " << index << endl;

            default:
                break;

            }
        } while (menu_option != 0 && menu_option != -1);

    } while (menu_option != -1);
    
    return 0;
}