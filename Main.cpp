#include "Empregado.cpp"
#include "Gerente.cpp"
#include "Vendedor.cpp"

int main()
{
   Gerente g1;
   g1.setNome("Joao");

   Vendedor v1;
   v1.setNome("Claudio");
 
   g1.toString();   

   cout << "" << endl;

   v1.toString();
}
 
