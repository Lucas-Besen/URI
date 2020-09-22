#include<iostream>
#include<math.h>
using namespace std;

long  Fibonacci[1000000],Fibonot[1000000],Tamanho=1000000;
int NumeroA=0,NumeroB=1,Aux,Termo,Cont;
bool Opcao=false;
void CalculaFibo();

int main(){
    CalculaFibo();
    cin>>Termo;
    cout<<Fibonot[Termo]<<"\n";
    return 0;
}
void CalculaFibo(){

    for (int i=1;i<=Tamanho;i++){
        Aux=NumeroA+NumeroB;
        NumeroA=NumeroB;
        NumeroB=Aux;
        Fibonacci[i]=NumeroB;
    }
    for (int i=1;i<=Tamanho;i++){

        for (int j=0;j<Tamanho;j++){
            
            if (i==Fibonacci[j]){
                Opcao=false;
                break;
            } 
            else if (i<Fibonacci[j])
            {
                Opcao=true;
                break;
            }
            else{
                Opcao=true;
            }
            
        }
        if (Opcao==true){
            Cont++;
            Fibonot[Cont]=i;
        }
    }
}