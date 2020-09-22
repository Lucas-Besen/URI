#include<locale.h>
#include<iostream>
#include<math.h>

using namespace std;
main(){
    int NumeroFuncionaio,HorasTrabalhadas;
    float ValorHora,Salario;
    cin>>NumeroFuncionaio>>HorasTrabalhadas>>ValorHora;
    Salario=HorasTrabalhadas*ValorHora;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",NumeroFuncionaio,Salario);
    return 0;
}