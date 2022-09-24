#include "Empregado.h"
#include "Gerente.h"  



Gerente::Gerente(){

    this->departamento = "Admnistrativo"; 
 
}

Gerente::Gerente(string departamento)
{
    this->departamento = departamento;   
}


string Gerente::setDepartamento(string departamento)
{
    this->departamento = departamento;
}


string Gerente::getDepartamento()
{
    return this->departamento;
}

void Gerente::toString()
{
    cout << "Nome do gerente: " << getNome() << endl;
    cout << "Salario do gerente: " << getSalario() << endl;
    cout << "Departamento do gerente: " << this->departamento << endl; 
}
