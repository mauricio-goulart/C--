#include <iostream>

using namespace std;

void troca(int* &p1, int* &p2)
{
    int* temp = p1;
    p1 = p2;
    p2 = temp;
}

int main()
{

    int* point1 = new int;
    int* point2 = new int;

    *point1 = 5;
    *point2 = 10;

    cout << "Ponteiro 1 = " << point1 << " Valor = " << *point1 << endl;
    cout << "Ponteiro 2 = " << point2 << " Valor = " << *point2 << endl;
    cout << endl << "Troca" << endl;

    troca(point1, point2);

    cout << "Ponteiro 1 = " << point1 << " Valor = " << *point1 << endl;
    cout << "Ponteiro 2 = " << point2 << " Valor = " << *point2 << endl;

    return 0;
}