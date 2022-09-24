#include "Empregado.h"


class Vendedor : public Empregado

{
    public: 

    Vendedor();

    Vendedor(float comissao);

    float calcularSalario();

    void toString();  // exibe lá dentro mesmo

    float comissao;
};