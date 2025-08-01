#include <iostream>
#include "motor.h"

using namespace std;

int main()
{
    int c;
    motor ap(1992);

    ap.setCadastro(12345);
    ap.setValor(5000.50);

    cout << "Ano: " << ap.getAno() << endl;
    cout << "Cadastro: " << ap.getCadastro() << endl;
    cout << "Valor: " << ap.getValor() << endl;

    cout << "Digite 1 para ligar o motor ou 0 para desligar: ";
    cin >> c;
    return 0;
}