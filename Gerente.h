#include "Empregado.h"

class Gerente : public Empregado
    
{
public:
    Gerente();

    Gerente(string departamento);
  
    string departamento;

    string getDepartamento();
    string setDepartamento(string departamento);
    void toString();
};
