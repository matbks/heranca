#include "Vendedor.h"  

Vendedor::Vendedor () {
    this->comissao = getSalario() * 0.1;  
}

Vendedor::Vendedor(float comissao) {
    this->comissao = comissao;

}

float Vendedor::calcularSalario (){
    
    float salarioDeVendedor = getSalario() + this->comissao ; 
    return salarioDeVendedor;
}


void Vendedor::toString(){

    cout << "Nome do vendedor:" << getNome() << endl;
    cout << "Salario do vendedor: " << getSalario() << endl;
    cout << "Salario do vendedor com comissão: " << salario + this->comissao << endl; 
    
     
}
