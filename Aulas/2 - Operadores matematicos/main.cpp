#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int a, b;

    cout << "n1 = ";
    cin >> a;

    cout << "n2 = ";
    cin >> b;
    
    //Operadores matematicos
    int soma = a + b;
    cout << "Soma = " << soma << endl;

    int subtracao = a - b;
    cout << "Subtração = " << subtracao << endl;

    int multi = a * b;
    cout << "Multiplicação = " << multi << endl;

    float div = float(a) / float(b);
    cout << "Divisão = " << div << endl;

    int pot = pow(a,b);
    cout << "Potencia = " << pot << endl;

    //Incremento e Decremento
    //a = a + 1;
    //a+= 1; pode se usar qualquer operação e valor.
    a++;
    b--;

    return 0;

}