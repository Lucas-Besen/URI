#include<iostream>
#include<locale.h>
#include<math.h>

using namespace std;

main(){

    int HoraInicial, MinutoInicial,HoraFinal,MinutoFinal;
    float MinutosTotal;
    cin>>HoraInicial>>MinutoInicial>>HoraFinal>>MinutoFinal;
    MinutoFinal+=HoraFinal*60;
    MinutoInicial+=HoraInicial*60;
    if (MinutoFinal==MinutoInicial){
       cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)";
    }
    else if (MinutoInicial<MinutoFinal){
        MinutosTotal=-1*(MinutoInicial-MinutoFinal);       
    }
    
    
    

    return 0;
}