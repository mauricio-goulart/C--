#include <iostream>
#include "motor.h"

using namespace std;

motor::motor(int ano, int cadastro, float valor)
{
    this->ano = ano;
    this->cadastro = cadastro;
    this->valor = valor;
}

void motor::setAno(int ano)
{
    this->ano = ano;
}

int motor::getAno()
{
    return this->ano;
}

void motor::setCadastro(int cadastro)
{
    this->cadastro = cadastro;
}

int motor::getCadastro()
{
    return this->cadastro;
}

void motor::setValor(float valor)
{
    this->valor = valor;
}

float motor::getValor()
{
    return this->valor;
}