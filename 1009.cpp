#include<iostream>
#include<math.h>
#include<string>
using namespace std;
main(){

    string NomeVendedor;
    double Salario,ValorVendas,Porcentagem=0.15,Total;
    cin>>NomeVendedor>>Salario>>ValorVendas;
    Total=Salario+(ValorVendas*Porcentagem);
    printf("TOTAL = R$ %.2f\n",Total);

    return 0;
}