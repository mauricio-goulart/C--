#include <iostream>

using namespace std;

int main()
{
    
    int* p1 = new int;
    int* p2 = new int;
    float* media = new float;
    
    cout << "Idade: ";
    cin >> *p1;

    cout << "Idade: ";
    cin >> *p2;

    *media = (*p1 + *p2)/ 2;

    cout << "media = " << *media;

    return 0;

}