#include <iostream>
using namespace std;

#ifndef EMPREGADO_H
#define EMPREGADO_H

class Empregado
{ 
public:

    Empregado();

    Empregado(string nome, float salario);

    void setNome(string nome);

    string getNome();

    string toString();

    string nome; 
      

protected:

    float salario; 
    
    void setSalario(float salario);

    float getSalario();

};


#endif 
