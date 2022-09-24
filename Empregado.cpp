#include "Empregado.h"

Empregado::Empregado(){

    this->salario = 1000;
}

Empregado::Empregado(string nome, float salario)
{
    this->nome = nome;
    
}

void Empregado::setNome(string nome)
{
    this->nome = nome;
}

void Empregado::setSalario(float salario)
{
    this->salario = salario;
}

string Empregado::getNome()
{
    return this->nome;
}

float Empregado::getSalario()
{
    return this->salario;
}

string Empregado::toString()
{
    string resultado = "O salario do ";
    resultado += this->nome;
    resultado += " é ";
    // resultado += this->salario;
    return  resultado; 
}