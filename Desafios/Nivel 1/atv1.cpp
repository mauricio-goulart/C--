#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int a;
    float x;

    cout << "f(a) = ";
    cin >> a;

    x = pow(a, 2) - (3 * a) + 5;

    cout << "f(" << a << ") = " << x << endl;
    
    return 0;
}